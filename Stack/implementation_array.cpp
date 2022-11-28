#include <iostream>
using namespace std;


class stack{
    public:
        int *arr;
        int top;
        int size;

    //constructor
    stack(int size){
        this -> size = size;
        arr = new int[size];
        top=-1;
    }

    //Push Operation
    void push(int element){
        
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow!!"<<endl;
        }

    }

    //Pop Operation
    void pop(){
        if(top >= 0){
            arr[top] = 0;
            top--;
        }
        else{
            cout<<"Stack Underflow!!"<<endl;
        }
    }

    //Top element
    int peek(){

        if(top>=0 && top < size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty!!"<<endl;
            return -1;
        }
    }

    //stack empty check
    bool isEmpty(){
        if(top = -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    stack s(5);

    s.push(1);
    s.push(2);
    s.push(4);
    s.push(5);
    s.push(4);
    //stack overflow
    //s.push(5);

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