#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//1 Defining the number of nominees...
#define CANDIDATE_NUM 7

//2 Defining the structure of candidate Details...
struct CandidateDetails
{
	char name[CANDIDATE_NUM][100];
	int age[CANDIDATE_NUM];
	int candidate_num[CANDIDATE_NUM];
	int candidate_id[CANDIDATE_NUM];
	int votes[CANDIDATE_NUM];
};

//3 Function to find maximum votes...
int getMaxVotes(int votes[CANDIDATE_NUM])
{

	int maxVote = -1, i1;
	for (i1 = 0; i1 < CANDIDATE_NUM; i1++)
	{
		if (maxVote < votes[i1])
		{
			maxVote = votes[i1];
		}
	}
	return maxVote;
}

//4 Printing the details in a nice format
void printDetails(struct CandidateDetails *details)
{
	printf(" \033[1;31m--------------------------------------------------------------------------------------------\n");
	printf("|sno\t|\tCandidateID\t|\tName\t\t|\tVoteDeviation\t|     votes  |\n");
	printf(" --------------------------------------------------------------------------------------------\033[0m\n");
	printf("|\t|\t\t\t|\t\t        |\t\t\t|\t     |\n");

	int maxVote = getMaxVotes(details->votes);
	int i2;

	for (i2 = 0; i2< CANDIDATE_NUM; i2++)
	{
		printf("\033[1;32m|%d\t|\t%-16d|\t%s\t\t|\t\t%-8d|\t%-5d|\n", i2+ 1, details->candidate_id[i2], details->name[i2], (maxVote - details->votes[i2]), details->votes[i2]);
	}
	printf("\033[0m|\t|\t\t\t|\t\t        |\t\t\t|\t     |\n");
	printf(" \033[1;31m-------------------------------------------------------------------------------------------\033[0m\n");
}

void printPreDetails(struct CandidateDetails details, int candiNum)
{
	printf(" \033[1;31m-------------------------------------------------------\n");
	printf("|sno\t|\tCandidateID\t|\tName\t\t|\n");
	printf(" -------------------------------------------------------\033[0m\n");
	printf("|\t|\t\t\t|\t\t        |\n");
	int i3;
	for (i3= 0; i3 < candiNum; i3++)
	{
		printf("\033[1;32m|%d\t|\t%-16d|\t%-10s\t|\n", i3 + 1, details.candidate_id[i3], details.name[i3]);
	}
	printf(" \033[1;31m-------------------------------------------------------\033[0m\n");
}

//1 Selecting the nomiees on base of age...
void getNominated(struct CandidateDetails *details, int age, int candiNum)
{
	// random number
	srand(time(NULL));
	int random_num = rand();

	details->candidate_id[candiNum] = (random_num % 100);
	details->candidate_num[candiNum] = candiNum;
	printf("\033[1;32m \n\n[:)] CONGRATULATIONS, %s YOU ARE A NOMINEE YOUR CANDIDATE ID IS ->  %d \n\n \033[0m\n", details->name[candiNum], random_num % 100);
	printPreDetails(*details, candiNum + 1);
}

//2 Function to make votes...
void makeVotes(struct CandidateDetails *details, int candidateId[], char name[CANDIDATE_NUM][100], int candiNum)
{
	printPreDetails(*details, candiNum);
	printf("\n\n\033[1;33m-----  ..CHOOSE THE SNO OF NOMINEE YOU WANT TO VOTE..  ----\033[0m\n");
	int index;
	while (1)
	{
		scanf("%d", &index);
		if ((index > candiNum) || (index < 0))
		{
			printf("\033[1;31m[ERROR:] =>> PLEASE CHOOSE THE VALID NOMINEE. ----\033[0m\n");
		}
		else
		{
			printf("\033[1;32m[%d:] =>> (%d)  -->  %s \033[0m\n", index, candidateId[index - 1], name[index - 1]);
			(details->votes[index - 1])++;
			break;
		}
	}
}

int main()
{

	struct CandidateDetails details;
	int i4;
	for (i4 = 0; i4 < CANDIDATE_NUM; i4++)
	{
		details.votes[i4] = 0;
	}

	int candiNum = 0;
	while (candiNum < CANDIDATE_NUM)
	{

		int age;
		printf("\n\n\033[1;33m-----  ..ENTER YOUR AGE..  ----\033[0m\n");
		scanf("%d", &age);
		if (age > 21)
		{
			printf("\n\n\033[1;33m-----  ..ENTER YOUR NAME..  ----\033[0m\n");
			fflush(stdin);
			gets(details.name[candiNum]);
			getNominated(&details, age, candiNum);
			candiNum++;
		}
		else
		{
			printf("\033[1;31m\n\n[ERROR:] =>> YOU ARE NOT ELIGIBLE TO BE A NOMINEE.. ----\n\n\033[0m\n");
		}
	}

	printf("\n\n\033[1;33m-----  ..ALL THE NOMINEE ARE ALOTTED YOU CAN START TO VOTE NOW..  ----\033[0m\n");
	char ch = 'a';
	while (ch != 'q')
	{
		makeVotes(&details, details.candidate_id, details.name, candiNum);
		printf("\033[1;31m\n\n[CHOICE:] =>> DO YOU WANT TO QUIT TYPE 'Q' TO QUIT OR IF YOU WANT TO CONTINUE PRESS ANY.. ----\n\n\033[0m\n");
		fflush(stdin);
		scanf("%c", &ch);
	}

	printDetails(&details);

	int maxVotes = getMaxVotes(details.votes);
	int maxVoteArray[CANDIDATE_NUM];
	int j = 0, i5;
	for (i5 = 0; i5 < CANDIDATE_NUM; i5++)
	{
		if (details.votes[i5] == maxVotes)
		{
			maxVoteArray[j] = i5;
			j++;
		}
	}
	printf("\033[1;32m\n\n[RESULT:] =>> WINNERS.. ----\n\033[0m");
	int i6;
	for (i6 = 0; i6 < j; i6++)
	{
		printf("\033[1;33m\n-->>  %s\033[0m", details.name[maxVoteArray[i6]]);
	}

	return 0;
}
