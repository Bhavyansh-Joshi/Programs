#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& arr, int n){
      for(int i=1; i<n; i++){
        int a=arr[i-1];
        for(int j=0; j<n; j++){

        }
      }
    

}

int main(){

    int n;
    cout<<"Enter the number of element: ";
    cin>>n;

    vector<int> arr;
    int a;
    cout<<"Enter the element: ";
    for(int i=0; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }

    cout<<"The unsorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    insertionSort(arr,n);

    cout<<"The sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }    

    return 0;
}