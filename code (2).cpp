#include<iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter number of rows: ";
    cin>>x;
    
    for (int i = 0; i<x; i++) {
        int y = 1;
        for(int j = 0; j<x; j++) {
            cout<<y <<" ";
            y++;
        }
        cout<<endl;
    }
}