#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data =  data;
        this -> next = NULL;
    }
};


void insertNode(Node* &head, int value){

    Node* temp = new Node(value);
    if(head==NULL){
        head = temp;
        return;
    }

    head->next = temp;

}

//part II
void insertAtTail(Node* &head, int d){

    Node* tempHead = head;
    while(tempHead->next!=NULL){
        tempHead = tempHead -> next;
    }

    Node* temp = new Node(d);
    tempHead->next = temp;

}


//part I
void printLL(Node* &head){
    Node* temp = head;

    while(temp!=nullptr){
        cout << temp->data <<" ";
        temp = temp->next;
    }

    cout <<endl;
}





int main()
{
    Node* head = NULL;
    insertNode(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    printLL(head);


    // dynamic variable using new keyword
    int var = 5;
    int* ptr = new int(var);
    cout << *ptr;


 return 0;
}