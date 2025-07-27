#include<iostream>
using namespace std;
int main() {
   // int x;
    //char ch;
   // cout<<"Enter number of Rows: ";
   // cin>>x;
    //cout<<"Enter the first character";
   // cin>>ch;
   // for(int i = 0; i<x; i++) {
    //    for(int j =0;  j<x; j++) {
     //       cout<<ch<<" ";
     //       ch++;
     //   }
    //    cout<<endl;
   // }


 //BUTTERFLY PATTERN
 int n;
 cout<<"Enter num :";
 cin>>n;
 for(int i =0; i<n ; i++) {
    for(int j = 0; j<i+1; j++) {
        cout<<"*"<<" ";
    }
    for(int j = 0; j<2*(n-(i+1)); j++) {
        cout<<"  ";
    }
    for(int j = 0; j<i+1; j++) {
        cout<<"*"<<" ";
    }
    cout<<endl;
 }
 for(int i = 0; i<n; i++) {
    for(int j= 0; j<n-i; j++) {
        cout<<"*"<<" ";
    }
    for(int j = 0; j<i*2 ; j++) {
        cout<<"  ";
    }
    for(int j = 0; j<n-i; j++) {
        cout<<"*"<<" ";
    }
    cout<<endl;
 }
}


     