/*
Pattern 9:

n: 5
A A A A A
B B B B B
C C C C C
E E E E E

*/
#include<iostream>
using namespace std;

int main(){

    int n;
    char ch='A';
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
            /*
            Approach 2 : cout<<(char)('A'+(i-1))<<" ";
            */
        }
        ch+=1;
        cout<<endl;
    }

    return 0;
    
}