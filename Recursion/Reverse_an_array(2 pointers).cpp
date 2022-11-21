/* Ques: Reverse an array using recursion(using 2 pointers)*/

#include <iostream>
using namespace std;

void rev(int arr[], int l, int r){
    if(l>=r){
        return;
    }

    swap(arr[l],arr[r]);
    rev(arr, l+1, r-1);
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
    
    rev(arr, 0, n-1);

    cout<<"The reversed array  is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    return 0;
}