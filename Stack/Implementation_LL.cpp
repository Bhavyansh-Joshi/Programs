#include <iostream>
using namespace std;

class Node{
 
    public:
        int data;
        Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }

};

class Stack{

    public:
        Node* head;
        Node* top;
        
    Stack(){
        head = NULL;
        top = NULL;
    }

    //Push Operation
    void push(int element){
        Node* newNode = new Node(element);

        if(head == NULL){
            head = newNode;
            top = newNode;
            return;
        }

        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        
        temp -> next = newNode;
        top = newNode;

    }

    //Pop Operation
    void pop(){
        if(head == NULL){
            cout<<"Stack is Empty!!"<<endl;
            return;
        }

        Node* temp = head;

        while(temp->next != top){
            temp = temp -> next;
        }

        temp -> next = NULL;
        Node* temp2 = top;
        top = temp;
        delete temp2;

        
    }

    int peek(){
        return top->data;
        
    }

    bool isEmpty(){
        if(head == NULL){
            return true;
        }
        else{
            return false;
        }
    }

};


int main(){


    Stack s;
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<s.peek()<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    s.pop();
    cout<<s.peek()<<endl;

    if(s.isEmpty()){
        cout<<"Stack is empty!!"<<endl;
    }
    else{
        cout<<"Stack is not empty!!"<<endl;
    }

    return 0;
}