#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        data = value;
        next = NULL;
        prev - NULL;
    }

};


void insertNode(Node* &head, int posn, int value){

    if(head==NULL){
        Node* temp = new Node(value);
        head = temp;
        return;
    }

    if(posn==1){
        Node* headNode = new Node(value);
        head->prev = headNode;
        headNode->next = head;
        head = headNode;

    }else{
        Node* newNode = head;
        int count = 1;
        while(count<posn-1){
            newNode = newNode->next;
            count++;
        }
        Node* nodeInsert = new Node(value);
        nodeInsert->next = newNode->next;
        nodeInsert->prev = newNode;
        newNode->next = nodeInsert;
    }

}


void printNode(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
}


int main(){
    Node* head = NULL;

    insertNode(head,3, 5);
    insertNode(head,2,25);
    insertNode(head,3,25);
    printNode(head);

    return 0;
}