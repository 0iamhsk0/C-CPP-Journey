#include <stdio.h>
#include <string.h>
struct customer
{
    int account_no;
    char name[80];
    int balance;
};

void accept(struct customer[], int);
void display(struct customer[], int);
int search(struct customer[], int, int);
void deposit(struct customer[], int, int, int);
void withdraw(struct customer[], int, int, int);
void saveData(struct customer[], int);
void loadData(struct customer[], int*);

int main()
{
    struct customer data[20];
    int n, choice, account_no, amount, index;//n(stores the number of customer records the user wants to input), index stores the index of record in data
    printf("Online Banking System\n\n");
    
    printf("Number of customer records you want to enter? : ");
    scanf("%d", &n);
    accept(data, n);//Writes
    saveData(data, n);//Updates
    do//do while loop is used because it ensures the meanu is displayed atleast once regardless the initial value
    {
        printf("\nBanking System Menu :\n");
        printf("Press 1 to display all records.\n");
        printf("Press 2 to search a record.\n");
        printf("Press 3 to deposit amount.\n");
        printf("Press 4 to withdraw amount.\n");
        printf("Press 0 to exit\n");
        printf("\nEnter choice(0-4) : ");
        scanf("%d", &choice);
        switch (choice) // for multiple operations
        {
            case 1:
                loadData(data, &n);//Reads
                display(data, n);
                break;
            case 2:
                printf("Enter account number to search : ");
                scanf("%d", &account_no);
                index = search(data, n, account_no);
                if (index == -1)
                {
                    printf("Record not found : ");
                }
                else
                {
                    printf("A/c Number: %d\nName: %s\nBalance: %d\n",
                        data[index].account_no, data[index].name,
                        data[index].balance);
                }
                break;
            case 3:
                loadData(data, &n);
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to deposit : ");
                scanf("%d", &amount);
                deposit(data, n, account_no, amount);
                saveData(data, n);
                break;
            case 4:
                loadData(data, &n);
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to withdraw : ");
                scanf("%d", &amount);
                withdraw(data, n, account_no, amount);
                saveData(data, n);//upadtes 
                break;
        }
    } while (choice != 0);
    printf("EXITING.....");
    return 0;
}

void accept(struct customer list[80], int s)
{
    int i, j;
    for (i = 0; i < s; i++)
    {
        printf("\nEnter data for Record #%d", i + 1);

        printf("\nEnter account_no : ");
        scanf("%d", &list[i].account_no);
        for (j = 0; j < i; j++)
        {
            if (list[i].account_no == list[j].account_no)
            {
                printf("\nAccount no. already exists. Enter Account no. again: ");
                scanf("%d", &list[i].account_no);
            }
        }
        fflush(stdin);
        printf("Enter name : ");
        gets(list[i].name);
        list[i].balance = 500;
    }
}
void display(struct customer list[80], int s)
{
    int i;
    printf("\nA/c No\tName\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\n", list[i].account_no, list[i].name,
            list[i].balance);
    }
}

int search(struct customer list[80], int s, int number)
{
    int i;
    for (i = 0; i < s; i++)
    {
        if (list[i].account_no == number)
        {
            return i;
        }
    }
    return -1;
}

void deposit(struct customer list[], int s, int number, int amt)
{
    int i = search(list, s, number), x = 0;
    if (i == -1)
    {
        printf("Record not found");
    }
    else
    {
        list[i].balance += amt;
        x++;
    }
}

void withdraw(struct customer list[], int s, int number, int amt)//structer name list, 's' size of array, number represents account number, amt represents the amount to be withdrawn 
{
    int i = search(list, s, number), y = 0;
    if (i == -1)
    {
        printf("Record not found\n");
    }
    else if (list[i].balance < amt)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        list[i].balance -= amt;
        y++;
    }
}

void saveData(struct customer list[], int s)
{
    FILE *file = fopen("data.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    int i;
    for (i = 0; i < s; i++)
    {
        fprintf(file, "%d,%s,%d\n", list[i].account_no, list[i].name, list[i].balance);
    }

    fclose(file);
    printf("Data saved successfully.\n");
}

void loadData(struct customer list[], int *s)
{
    FILE *file = fopen("data.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    int account_no, balance;
    char name[80];
    int i = 0;

    while (fscanf(file, "%d,%[^,],%d\n", &account_no, name, &balance) == 3)
    {
        list[i].account_no = account_no;
        strcpy(list[i].name, name);
        list[i].balance = balance;
        i++;
    }

    *s = i;

    fclose(file);
    printf("Data loaded successfully.\n");
}
