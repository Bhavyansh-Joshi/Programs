/*Ques: Count the number of set bits(number of bits with value=1) in two numbers*/

#include<iostream>
using namespace std;

int setBit(int a, int b){
    int count = 0, temp=0;
    while(a!=0){
        temp=a%2;
        if(temp%2==1){
            count++;
        }
        a/=2;
    }

    while(b!=0){
        temp=b%2;
        if(temp%2==1){
            count++;
        }
        b/=2;
    }
    return count;
}

int main(){

    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    int ans = setBit(a, b);

    cout<<"No of set bit are: "<<ans;

    return 0;
}