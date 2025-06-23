#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book {
    char title[50];
    char author[50];
    char description[200];
};

struct donor_receiver {
    char name[50];
    char address[100];
    char contact_no[15];
    struct book book_details;
};

void add_record() {
    FILE *fp;
    struct donor_receiver dr;
    fp = fopen("book_donation_system.txt", "a+");
    if (fp == NULL) {
        printf("Error opening file\n");
        return;
    }
    printf("................................................................................");
    printf("\n ==> Enter the name of the donor/receiver: ");
    fgets(dr.name, 50, stdin);
    printf("................................................................................");
    printf("\n ==> Enter the address: ");
    fgets(dr.address, 100, stdin);
    printf("................................................................................");
    printf("\n ==> Enter the contact number: ");
    fgets(dr.contact_no, 15, stdin);
    printf("................................................................................");
    printf("\n ==> Enter the book title: ");
    fgets(dr.book_details.title, 50, stdin);
    printf("................................................................................");
    printf("\n ==> Enter the book author: ");
    fgets(dr.book_details.author, 50, stdin);
    printf("................................................................................");
    printf("\n ==> Enter the book description: ");
    fgets(dr.book_details.description, 200, stdin);
    printf("................................................................................");
    fwrite(&dr, sizeof(struct donor_receiver), 1, fp);
    fclose(fp);
    printf("\nRecord added successfully.\n");
}

void delete_record() {
    FILE *fp, *temp_fp;
    struct donor_receiver dr;
    char name[50];
    printf("\n ==> Enter the name of the donor/receiver to delete: ");
    fgets(name, 50, stdin);
    fp = fopen("book_donation_system.txt", "r");
    if (fp == NULL) {
        printf("==>Error opening file<==\n");
        return;
    }
    temp_fp = fopen("temp.txt", "w");
    if (temp_fp == NULL) {
        printf("==>Error opening file<==\n");
        fclose(fp);
        return;
    }
    while (fread(&dr, sizeof(struct donor_receiver), 1, fp)) {
        if (strcmp(dr.name, name) != 0) {
            fwrite(&dr, sizeof(struct donor_receiver), 1, temp_fp);
        }
    }
    fclose(fp);
    fclose(temp_fp);
    remove("book_donation_system.txt");
    rename("temp.txt", "book_donation_system.txt");
    printf("\nRecord deleted successfully.\n");
}

void update_record() {
    FILE *fp, *temp_fp;
    struct donor_receiver dr;
    char name[50];
    int found = 0;
    printf("\n ==> Enter the name of the donor/receiver to update: ");
    fgets(name, 50, stdin);
    fp = fopen("book_donation_system.txt", "r");
    if (fp == NULL) {
        printf(" ==> Error opening file <==\n");
        return;
    }
    temp_fp = fopen("temp.txt", "w");
    if (temp_fp == NULL) {
        printf("Error opening file\n");
        fclose(fp);
        return;
    }
    while (fread(&dr, sizeof(struct donor_receiver), 1, fp)) {
        if (strcmp(dr.name, name) == 0) {
            found = 1;
            printf("\n ==> Enter the new name: ");
            fgets(dr.name, 50, stdin);
            printf("\n ==> Enter the new address: ");
            fgets(dr.address, 100, stdin);
            printf("\n ==> Enter the new contact number: ");
            fgets(dr.contact_no, 15, stdin);
            printf("\n ==> Enter the new book title: ");
            fgets(dr.book_details.title, 50, stdin);
            printf("\n ==> Enter the new book author: ");
            fgets(dr.book_details.author,50, stdin);
printf("\nEnter the new book description: ");
fgets(dr.book_details.description, 200, stdin);
fwrite(&dr, sizeof(struct donor_receiver), 1, temp_fp);
} else {
fwrite(&dr, sizeof(struct donor_receiver), 1, temp_fp);
}
}
fclose(fp);
fclose(temp_fp);
remove("book_donation_system.txt");
rename("temp.txt", "book_donation_system.txt");
if (found) {
printf("\nRecord updated successfully.\n");
} else {
printf("\nRecord not found.\n");
}
}

void display_records() {
    FILE *fp;
    struct donor_receiver dr;
    int serial_no = 1;
    fp = fopen("book_donation_system.txt", "r");
    if (fp == NULL) {
        printf(" ==> Error opening file <==\n");
        return;
    }
    printf("\nBook Donation System Records:\n");
    while (fread(&dr, sizeof(struct donor_receiver), 1, fp)) {
        printf("\n%d. Donor/Receiver: %s\n",serial_no++, dr.name);
        printf("Address: %s", dr.address);
        printf("Contact No: %s", dr.contact_no);
        printf("Book Title: %s", dr.book_details.title);
        printf("Author: %s", dr.book_details.author);
        printf("Description: %s", dr.book_details.description);
        printf("\n");
    }
    fclose(fp);
}

int main() {
int choice;
while(1){
printf("\n*************************Welcome to Book Donation System*************************\n\n\n");
printf("=====================================================================================");	
printf("\n|| 1.Add record                                                                    ||\n");
printf("|| 2.Delete record                                                                 ||\n");
printf("|| 3.Update record                                                                 ||\n");
printf("|| 4.display record                                                                ||\n");
printf("|| 5.Exit                                                                          || \n");
printf("=====================================================================================");
printf("\n\n>->->Enter your choice:");
scanf("%d", &choice);
switch (choice) {
case 1:
add_record();
break;
case 2:
delete_record();
break;
case 3:
update_record();
break;
case 4:
display_records();
break;
case 5:
printf("\n<~*~*~*~*~*~*~*~*~*~*~*~ Goodbye! Thanks for Donating ~*~*~*~*~*~*~*~*~*~*~*~*~>\n");
exit(0);
break;
default:
printf("\nInvalid choice. Please try again.\n");
break;
}
}
return 0;
}
