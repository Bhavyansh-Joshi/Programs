#include<iostream>
using namespace std;

int getLength(char s[]){
    int count=0;
    
    while(s[count]!='\0'){
        count++;
    }
    return count;
}
int main(){
    
    char s[20];

    cout<<"Enter The string: ";
    cin>>s;

    cout<<"The length  of string is: " <<getLength(s);

    return 0;
}