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

void DeletAtHead( node * &head ){  

    node *todelete = head;
    head = head -> next;
    delete todelete;
}
void Deletion( node * &head , int value ){  

    if( head == NULL ) return;
    if( head -> next == NULL ){
        DeletAtHead( head );
    }
    node *temp = head;
    while( temp -> next -> data != value ){
        temp = temp -> next;
    }
    node *todelete = temp -> next;
    temp -> next = temp -> next -> next;
    delete todelete;
}
void InsertAtHead( node * &head , int value ){

    node *n = new node( value );
    n -> next = head;
    head = n;
}
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

bool search( node *head , int key ){   

    node *temp = head;
    while( temp != NULL ){
        if( temp -> data == key ){
            return true;
        }
        temp = temp -> next;
    }
    return false;
}
void Display( node *head ){

    node *temp = head;
    while( temp != NULL ){
        cout << temp -> data <<"->";
        temp = temp -> next;
    }
    cout << endl;
}

node *reverse( node * &head ){    // how to reverse a linkedlist 

    node *previousptr = NULL;
    node *currentptr = head;                  
    node *nextptr;  

    while( currentptr != NULL ){
        nextptr = currentptr -> next;
        currentptr -> next = previousptr;

        previousptr = currentptr;
        currentptr = nextptr;
    }
    return previousptr;
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

    // cout << search( head , 6 ) << endl;

    // DeletAtHead( head );
    // Display( head );

    node *newhead = reverse( head );
    Display( newhead );

    // output

    // 1->2->3->
    // 5->4->1->2->3->
    // 3->2->1->4->5->

    return 0;
}
