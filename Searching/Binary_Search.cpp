#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start<=end){

        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;

}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element in the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;

    int index = binarySearch(arr, n, key);

    cout<<endl<<"The position of "<<key<<" is: "<<index<<endl;

    return 0;


}