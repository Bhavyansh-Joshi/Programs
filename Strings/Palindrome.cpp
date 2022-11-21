#include<iostream>
using namespace std;

int getLength(char s[]){
    int count=0;
    
    while(s[count]!='\0'){
        count++;
    }
    return count;
}

bool isPalindrome(char s[], int n){
    int st=0;
    int e=n-1;
    
    while(st<=e){
        if(s[st]!=s[e]){
            return false;
        }
        st++;
        e--;
    }
    return true;

}

int main(){
    
    char s[20];

    cout<<"Enter The string: ";
    cin>>s;
    int n=getLength(s);
    bool a=isPalindrome(s,n);
    cout<<" Is Plalindrome? : " <<a;

    return 0;
}