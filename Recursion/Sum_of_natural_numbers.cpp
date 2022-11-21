/* Ques: Find the sum of first N natural numbers using recursion (without parameterized)*/

#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    
    return n + sum(n-1);
}

int main(){
    int n, s=0;
    cout<<"Enter the number N you want the sum for: ";
    cin>>n;

    s = sum(n);
    cout<<"The sum of N numbers is: "<<s;

    return 0;
}