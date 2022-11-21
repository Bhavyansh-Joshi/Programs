/*Ques: Print nth term in fibonacci series*/

#include<iostream>
using namespace std;

int fibo(int n){
    int a=1, b=1, c=0;
    if(n==1 || n==2){
        return 1;
    }
    for(int i=2; i<n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main(){

    int n;
    cout<<"Enter The term you want: ";
    cin>>n;

    int ans = fibo(n);

    cout<<"The nth term is: "<<ans;

    return 0;
}