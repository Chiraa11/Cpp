#include<iostream>
using namespace std;
int main() {
   // int n;
   // cout<<"Enter number of coloumns : ";
   // cin>>n;
   // for(int i = 0; i<n; i++) {
    //    for(int j = 0; j<n-i-1; j++) {
    //        cout<<" ";
     //   }
    //    for(int j = 0; j< i+1; j++) {
    //        cout<<j+1;
    //    }
     //   for(int j = i; j>0  ; j--) {
     //       cout<<j;
     //   }
    //    cout<<endl;

    //}



    //HOLLOW DIAMOND PATTERN
    int x;
    cout<<"Enter number of col: ";
    cin>>x;
    for(int i =0; i<=x -1; i++) {
        for(int j=0; j<x-i -1; j++) {
            cout<<" ";
        }
            cout<<"*";
        if( i!= 0) {
            for(int j = 0; j< i*2 -1; j++) {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i<x-1; i++) {
        for(int j = 0; j<i+1; j++) {
            cout<<" ";
        }
            cout<<"*";
            if(i!=x-2) {

        for(int j = 0; j<2*(x-i)-5; j++) {
          cout<<" ";
        }
        cout<<"*";
    }
        
        cout<<endl;
    }
}