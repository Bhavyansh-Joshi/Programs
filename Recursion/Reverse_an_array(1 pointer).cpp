/* Ques: Reverse an array using recursion(using 1 pointers)*/

#include <iostream>
using namespace std;

void rev(int n, int arr[], int l){
    if(l>=n/2){
        return;
    }

    swap(arr[l],arr[n-l-1]);
    rev(n, arr, l+1);
}

int main(){

    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
    }
    
    rev(n,arr, 0);

    cout<<"The reversed array  is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    return 0;
}