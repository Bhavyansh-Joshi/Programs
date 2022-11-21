/*
Pattern 2:

Enter n: 5
11111
22222
33333
44444
55555

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
        cout<<i;
        }
        cout<<endl;
    }

    return 0;
    
}