#include<iostream>
using namespace std;

int main(){

    int amt=0, count100=0, count50=0, count20=0, count1=0;
    cout<<"Enter the amount: ";
    cin>>amt;
    
    switch(1){

            case 1: count100=amt/100;
                    amt=amt-(count100*100);
                    

            case 2: count50=amt/50;
                    amt=amt-(count50*50);
                    

            case 3: count20=amt/20;
                    amt=amt-(count20*20);
                    
            case 4: count1=amt/1;
                    amt=amt-(count1*1);
            
        
    }

    cout<<"100 : "<<count100<<endl;
    cout<<"50 : "<<count50<<endl;
    cout<<"10 : "<<count20<<endl;
    cout<<"10 : "<<count1<<endl;
        
    return 0;
    
}