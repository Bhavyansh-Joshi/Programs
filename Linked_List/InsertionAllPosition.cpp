#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertion(Node* &head, int data, int index){
    if(index == 0){
        Node* n1 = new Node(data);
        n1->next = head;
        head=n1;
        
    }
    else{
        Node* prev = NULL;
        Node* curr = head;

        int i=1;
        while(i<=index){
            if(curr==NULL){
                return;
            }
            prev=curr;
            curr=curr->next;
            i++;
        }
        if(curr==NULL){
            return;
        }
        Node* n1 = new Node(data);
        prev->next = n1;
        n1->next = curr;
    }
    

}

void printLL(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    Node* node1 = new Node(10);
    Node* node2 = new Node(11);
    node1->next = node2;
    Node* node3 = new Node(12);
    node2->next = node3;
    Node* node4 = new Node(13);
    node3->next = node4;
    Node* node5 = new Node(14);
    node4->next = node5;
    Node* node6 = new Node(15);
    node5->next = node6;

    Node* head = node1;

    printLL(head);
    insertion(head, 1, 0);
    printLL(head);
}