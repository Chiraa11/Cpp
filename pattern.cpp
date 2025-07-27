#include<iostream>
using namespace std;
int main() {
    //int n;
    //cout<<"Enter a number for creating pattern  : ";
    //cin >> n;
   // for(int i = 1; i<=n; i++) {
        //char ch = 'A';
       // for (int j = 1; j<=n; j++){
        //    cout<<ch;
           // ch = ch+1;
        //}
       // cout<<endl;
   // }
//    //cout<<"* * * *\n     *\n   *\n *\n* * * * ";
int n,num;
cout<<"Enter number of rows :";
cin>>n;
cout<<"Enter the first number :";
cin>>num;
for (int i = 0; i<n; i++) {
    for(int j = 0; j<n; j++) {
cout<<num<<" ";
num++;
    }
cout<<endl;
        }
        cout<<"After Pattern :"<<num<<endl;
    }
