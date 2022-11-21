/* Ques: Find the factorial of first N natural numbers using recursion*/

#include<iostream>
using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }
    
    return n * fact(n-1);
}

int main(){
    int n, s=0;
    cout<<"Enter the number N you want the sum for: ";
    cin>>n;

    s = fact(n);
    cout<<"The factorial of N numbers is: "<<s;

    return 0;
}