#include<bits/stdc++.h>
using namespace std;


class node{

    public:
    int data;
    node *next;
    node *prev;

    node( int value ){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void DeleteAtHead( node * &head ){  // special case for first node

    node *todelete = head;
    head = head -> next;
    head -> prev = NULL;
    delete todelete;
}
void deletion( node * &head , int pos ){    // how to delete the node in doubly linkedlist

    if( pos == 1 ){
        DeleteAtHead( head );
        return;
    }
    node *temp = head;
    int count = 1;
    while( temp != NULL && count != pos ){
        temp = temp -> next;
        count++;
    }
    temp -> prev -> next = temp -> next;
    if( temp -> next != NULL ){
        temp -> next -> prev = temp -> prev;
    }
    delete temp;
}
void InsertAtHead( node * &head , int value ){

    node *n = new node( value );
    n -> next = head;
    if( head != NULL ){
        head -> prev = n;
    }
    head = n;
}
void InsertAtTail( node * &head , int value ){

    if( head == NULL ){
        InsertAtHead( head , value );
        return;
    }
    node *n = new node( value );
    node *temp = head;
    while( temp -> next != NULL ){
        temp = temp -> next;
    }
    temp -> next = n;
    n -> prev = temp;
}

void Display( node *head ){

    node *temp = head;
    while( temp != NULL ){
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout << endl;
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
    deletion( head , 2 );
    Display( head );

    return 0;
}
