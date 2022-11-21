/* Ques: Print the fibonacci series ant the sum using recursion*/

#include <iostream>
using namespace std;

int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}

int main(){

    int n;
    cout<<"Enter the number of terms in Fibonacci series: ";
    cin>>n;
    cout<<"The fibonacci series is: ";

    int sum = 0;

    for(int i=0; i<n; i++){
        cout<<fibo(i)<<" ";
    }

    for(int i=0; i<n; i++){
        sum += fibo(i);
    }
    
    cout<<endl<<"The fibonacci series is: "<<sum;

    return 0;
    
}