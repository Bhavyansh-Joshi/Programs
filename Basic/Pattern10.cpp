/*
Pattern 10:

n: 5
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

*/
#include<iostream>
using namespace std;

int main(){

    int n;
    char ch;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        ch='A';
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
            /*
            Approach 2 : cout<<(char)('A'+(j-1))<<" ";
            */
           ch+=1;
        }
        
        cout<<endl;
    }

    return 0;
    
}