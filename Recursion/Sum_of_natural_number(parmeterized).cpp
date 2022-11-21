/* Ques: Find the sum of first N natural numbers using recursion (parameterized)*/

#include<iostream>
using namespace std;

void sum(int n, int s){
    if(n==0){
        cout<<"Sum of 1 to N is: "<<s;
        return;
    }
    s+=n;
    sum(n-1,s);
}

int main(){
    int n, s=0;
    cout<<"Enter the number N you want the sum for: ";
    cin>>n;

    sum(n,s);
}