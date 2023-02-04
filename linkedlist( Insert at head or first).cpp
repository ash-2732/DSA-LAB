#include<bits/stdc++.h>
using namespace std;


class node{

    public:
    int data;
    node *next;

    node( int value ){
        data = value;
        next = NULL;
    }
};

void InsertAtHead( node * &head , int value ){

    node *n = new node( value );
    n -> next = head;
    head = n;
}
void InsertAtTail( node * &head , int value ){ // set new node at the end of the list

    node *n = new node( value );
    if( head == NULL ){
        head = n;   // if nothing at the head then new node will be head;
        return;
    }
    node *temp = head;
    while( temp -> next != NULL ){
        temp = temp -> next;
    }
    temp -> next = n;   // after traversing full we set up the new node at the end of the list
}

void Display( node *head ){

    node *temp = head;
    while( temp != NULL ){
        cout << temp -> data <<"->";
        temp = temp -> next;
    }
    cout << "NULL" <<endl;
}
int main(){

    node *head = NULL;
    InsertAtTail( head , 1 );
    InsertAtTail( head , 2 );
    InsertAtTail( head , 3 );
    Display( head );
    InsertAtHead( head , 4 );
    InsertAtHead( head , 5 );
    Display( head );
    return 0;
}
