//inserting an element at the begining and reverse the double linked list

#include <iostream>
#include <cstdlib>
using namespace std;
struct link
{
    int data;
    struct link *next;
    struct link *prev;
};
struct link *start = NULL;
struct link *node;
struct link *current;
void create()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n-1; i++){
        node = (struct link *)malloc(sizeof(struct link));
        cin >> node -> data;
        node -> next = NULL;
        node -> prev = NULL;
        if (start == NULL){
            start = node;
            current = node;
        }
        else{
            current -> next = node;
            node -> prev = current;
            current = current -> next;
        }
    }
}
void insert()
{
    int n;
    node = (struct link *)malloc(sizeof(struct link));
    cin >> node -> data;
    current -> next = node;
    node -> prev = current;
    node -> next = NULL;
    current = node;
}
void display()
{
    struct link *ptr = current;
    cout << "Final List: ";
    while (ptr != NULL){
        cout << ptr -> data << " ";
        ptr = ptr -> prev;
    }
}
int main()
{
    create();
    insert();
    display();
}