#include<iostream>
using namespace std;

int getLength(char s[]){
    int count=0;
    
    while(s[count]!='\0'){
        count++;
    }
    return count;
}

void getReverse(char s[], int n){
    int st=0;
    int e=n-1;
    
    while(st<e){
        swap(s[st],s[e]);
        st++;
        e--;
    }

}

int main(){
    
    char s[20];

    cout<<"Enter The string: ";
    cin>>s;
    int n=getLength(s);
    getReverse(s,n);
    cout<<"The length  of string is: " <<s;

    return 0;
}