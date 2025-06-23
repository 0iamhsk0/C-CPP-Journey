#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLAVOURS 100

struct IceCream {
    int id;
    char name[50];
    float price;
};

struct IceCream flavours[MAX_FLAVOURS];
int num_flavours = 0;

void display_list() {
	int i;
    printf("ID\tName\t\tPrice\n");
    for (i = 0; i < num_flavours; i++) {
        printf("%d\t%s\t\t%.2f\n", flavours[i].id, flavours[i].name, flavours[i].price);
    }
}

void add_data() {
    if (num_flavours >= MAX_FLAVOURS) {
        printf("Error: Maximum number of flavours reached.\n");
        return;
    }
    struct IceCream ice_cream;
    printf("Enter ice cream ID: ");
    scanf("%d", &ice_cream.id);
    printf("Enter ice cream name: ");
    scanf("%s", ice_cream.name);
    printf("Enter ice cream price: ");
    scanf("%f", &ice_cream.price);
    flavours[num_flavours++] = ice_cream;
}

void update_data() {
    int id,i;
    printf("Enter the ID of the ice cream to update: ");
    scanf("%d", &id);
    for(i = 0; i < num_flavours; i++) {
        if (flavours[i].id == id) {
            printf("Enter new name: ");
            scanf("%s", flavours[i].name);
            printf("Enter new price: ");
            scanf("%f", &flavours[i].price);
            printf("Ice cream updated successfully.\n");
            return;
        }
    }
    printf("Error: Ice cream not found.\n");
}

void search_data() {
    int id,i;
    printf("Enter the ID of the ice cream to search: ");
    scanf("%d", &id);
    for (i = 0; i < num_flavours; i++) {
        if (flavours[i].id == id) {
            printf("ID\tName\t\tPrice\n");
            printf("%d\t%s\t\t%.2f\n", flavours[i].id, flavours[i].name, flavours[i].price);
            return;
        }
    }
    printf("Error: Ice cream not found.\n");
}

void delete_data() {
    int id,i,j;
    printf("Enter the ID of the ice cream to delete: ");
    scanf("%d", &id);
    for (i = 0; i < num_flavours; i++) {
        if (flavours[i].id == id) {
            for (j = i; j < num_flavours - 1; j++) {
                flavours[j] = flavours[j + 1];
            }
            num_flavours--;
            printf("Ice cream deleted successfully.\n");
            return;
        }
    }
    printf("Error: Ice cream not found.\n");
}

int main(){
	int choice;
	do{
		printf("Welcome to the ice cream parlour system.\n");
        printf("1. Display list\n");
        printf("2. Add data\n");
        printf("3. Update data\n");
        printf("4. Search data\n");
        printf("5. Delete data\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
		getchar();
        switch (choice) {
        	case 1:
        		display_list();
        		break;
        	case 2:
        		add_data();
        		break;
        	case 3:
        		update_data();
        		break;
        	case 4:
        		search_data();
        		break;
        	case 5:
        		delete_data();
        		break;	
		}
	}
}

        

