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

    return 0;
}
