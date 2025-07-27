#include<iostream>
using namespace std;
int main() {
    // FLOYD TRIANGLE PATTERN

    //int n, m;
    //cout<<"Enter number of coloumn : ";
    //cin>>n;
    //cout<<"Enter first number: ";
    //cin>>m;
    //for(int i = 0; i<n; i++) {
      //  for(int j = 0; j<i+1; j++) {
      //  cout<<m<<" ";
     //   m+=1;
      //  }
//cout<<endl;
   // }
//}


// Char Version
//int a;
//cout<<"Enter number of coloumn : ";
//cin>>a;
//char ch;
//cout<<"Enter the first character: ";
//cin>>ch;
//for(int i = 0; i<a; i++) {
    //for(int j = 0; j <i+1; j++) {
        //cout<<ch<<" ";
       // ch+=1;
   // }
    //cout<<endl;
//}
//}

//INVERTED TRUANGLE PATTERN
//int n;
//cout<<"Enter number of coloumn : ";
//cin>>n;
//for(int i = 0; i<n; i++) {
    //for(int j = 0; j<i; j++) {
    //    cout<<" ";
    //}
    //for (int j = 0; j<n-i; j++) {
    //    cout<<i+1;
    //}
    //cout<<endl;
//}

//char version
int n ;
char ch;
cout<<"Enter number 0f coloumn :";
cin>>n;
cout<<"Enter the first character : ";
cin>>ch;
for(int i = 0; i<n; i++ ) {
    for(int j = 0; j<i; j++ ){
        cout<<" ";
    }
    for(int j = 0; j<n-i; j++) {
        cout<<ch;
        
    }
    cout<<endl;
    ch+=1;
}
}



