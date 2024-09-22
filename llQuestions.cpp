#include <iostream>
using namespace std;

struct Node{
int data;
Node* next;
Node(int value): data(value), next(nullptr);
};

class singlyLinkedList{
public:
singlyLinkedList(): head(nullptr){}


//fxn to reverse a singly linked list
    void reverse(){
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while(current != nullptr){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        }
    }
}
        //Inserting a value at key
        void insertionNode(int key, int value){
            Node* current = head;
                if(head == nullptr){
                return;
                }

            do{
                if(current->data == key){
                    Node* newNode = new Node(value);
                    newNode->next = current->next;
                    current->next = newNode;
                    return;
                }
                current = current->next;
            }while(current != head)
        }

    //fxn to delete head

    void deleteHead(Node*& head){
        if(head == nullptr){
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

int main()
{
cout << "Hello, World!";
return 0;
}