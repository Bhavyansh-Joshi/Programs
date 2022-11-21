#include<iostream> 
#include<vector> 
using namespace std;

int sort(vector<int> arr, int n){
    int count=0;
    for(int i=1; i<n; i++){
        bool swp = false;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                count++;
                swp = true;
            }
        }
        if(swp==false){
            break;
        }
    }
    return count;
}

int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n,a,b;
        string s;
        vector<int> d;
        vector<int> u;
        vector<string> s1;
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>s;
            s1.push_back(s);
            cin>>a;
            d.push_back(a);
            cin>>b;
            u.push_back(b);
        }
        int count=0;
        count = sort(u, n);
        
        cout<<count<<endl;

    }
}