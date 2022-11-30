#include <iostream>
#include <queue>
using namespace std;

int main(){

    //Creation
    queue<int> q;

    //pushing element
    q.push(11);
    //checking front and back
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    //Size of queue
    cout<<"Size: "<<q.size()<<endl;

    //pushing element
    q.push(45);
    //checking front and back
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    //Size of queue
    cout<<"Size: "<<q.size()<<endl;

    //pushing element
    q.push(23);
    //checking front and back
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    //Size of queue
    cout<<"Size: "<<q.size()<<endl;

    //pushing element
    q.push(5);
    //checking front and back
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    //Size of queue
    cout<<"Size: "<<q.size()<<endl;

    //pushing element
    q.push(32);
    //checking front and back
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    //Size of queue
    cout<<"Size: "<<q.size()<<endl;

    //romoving/poping element
    q.pop();
    //checking front and back
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    //Size of queue
    cout<<"Size: "<<q.size()<<endl;

    //romoving/poping element
    q.pop();
    //checking front and back
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    //Size of queue
    cout<<"Size: "<<q.size()<<endl;

    //romoving/poping element
    q.pop();
    //checking front and back
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    //Size of queue
    cout<<"Size: "<<q.size()<<endl;


    //Check empty queue

    if(q.empty()){
        cout<<"Queue is Empty!!";
    }
    else{
        cout<<"Queue is not Empty!!";
    }

    return 0;

}