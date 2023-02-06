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

void InsertAtTail( node * &head , int value ){

    node *n = new node( value );
    if( head == NULL ){
        head = n;
        return;
    }
    node *temp = head;
    while( temp -> next != NULL ){
        temp = temp -> next;
    }
    temp -> next = n;
}

node *mergelinklist( node * &head1 , node * &head2 ){

    node *ptr1 = head1;
    node *ptr2 = head2;

    node *dummynode = new node( -1 );
    node *ptr3 = dummynode;

    while( ptr1 != NULL && ptr2 != NULL ){

        if( ptr1 -> data < ptr2 -> data ){
            ptr3 -> next = ptr1;
            ptr1 = ptr1 -> next;
        }
        else{
            ptr3 -> next = ptr2;
            ptr2 = ptr2 -> next;
        }
        ptr3 = ptr3 -> next;
    }

    while( ptr1 != NULL ){
        ptr3 -> next = ptr1;
        ptr1 = ptr1 -> next;
        ptr3 = ptr3 -> next;
    }
    while( ptr2 != NULL ){
        ptr3 -> next = ptr2;
        ptr2 = ptr2 -> next;
        ptr3 = ptr3 -> next;
    }

    return dummynode -> next;
}
void Display( node *head ){

    node *temp = head;
    while( temp != NULL ){
        cout << temp -> data <<"->";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}
int main(){

    node *head1 = NULL;
    node *head2 = NULL;

    int element1[] = {};    // we have to take some sorted element
    int element2[] = {};    // we have to take some sorted element

    for( int i = 0; i < 1; i++ ){
        InsertAtTail( head1 , element1[i] );
    }
    for( int i = 0; i < 1; i++ ){
        InsertAtTail( head2 , element2[i] );
    }
    Display( head1 );
    Display( head2 );
    node *newnode = mergelinklist( head1 , head2 );
    Display( newnode );

    return 0;
}
