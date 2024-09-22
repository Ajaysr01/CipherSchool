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



void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}



void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}


void printLL(Node* &head){
    Node* temp = head;

    while(temp!=nullptr){
        cout << temp->data <<" ";
        temp = temp->next;
    }

    cout <<endl;
}


void deleteNode(int posn, Node* & head){

    if(posn == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }else{
        Node* cur = head;
        Node* prev = NULL;

        int count = 1;
        while(count < posn){
            prev = cur;
            cur = cur -> next;
            count++;
        }

        prev -> next = cur -> next;
        cur -> next = nullptr;
        delete cur;
    }



}





int main()
{
    Node* newNode2 = NULL;
    int n;
    while(true){
        cin>>n;
        if(n == -1){
            break;
        }
        insertNode(newNode2, n);
    }

    Node* newNode = new Node(10);
    Node* newNode1 = new Node(20);
    
    Node* head = newNode2;
    Node* tail = newNode;

    insertNode(head, 5);
    insertNode(head, 15);
    printLL(head); 
    // insertAtTail(tail, 20);
    //insertAtTail(tail, 30);
    //insertAtTail(tail, 40);

    // int posn;
    // cin>>posn;
    //deleteNode(3, head);
    //printLL(head); 

 return 0;
}