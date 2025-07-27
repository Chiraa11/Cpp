#include<iostream>
using namespace std;
char x,y;
cout<<"Enter number of rows: ";
cin>>x;
cout<<"Enter the first character:";
cin>>y;
char a = 'A';
for(int i =0; i<x; i++) {
    for(int j= 0; j<x; j++) {
        cout<<a;
        a++;
    }
    cout<<endl;
}
return 0;
