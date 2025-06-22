//creating a double linked list with strings and add the extra string at the last and reverse it


#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
struct link
{
    string data;
    struct link *next;
    struct link *prev;
};
struct link *start = NULL;
struct link *current;
struct link *node;

void create()
{
    int n;
    cin >> n;
    for (int i = 0; i <=n-1; i++){
        node = (struct link *)malloc(sizeof(struct link));
        getline(cin, node -> data);
        node -> next = NULL;
        node -> prev = NULL;
        if ( start = NULL){
            start = node;
            current = node;
        }
        else{
            current = next -> node;
            node -> prev = current;
            current = node;
        }
    }
    cout "Document: ";
    struct link *ptr = current;
    while (ptr != NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->prev;
    }
    cout<<endl;
}

void insert(){
    node=(struct link *)malloc(sizeof(struct link));
    getline (cin, node -> data);
    node -> next = start;
    node -> prev = NULL;
    start -> prev = node;
    start = node;
}

void display()
{
    struct link *ptr = current;
    cout << "Updated Document: ";
    while (ptr!=NULL){
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