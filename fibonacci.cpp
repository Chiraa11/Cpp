#include<iostream>
using namespace std;
int main() {
int n,a,b,next;
a = 0; b=1; 
cout<<"Enter number : ";
cin>>n;
cout<<"Fibonacci series upto "<<n<<" terms : ";
for(int i = 0; i<n; i++) {
   cout<<a<<" ";
   next = a+ b;
   a = b;
   b = next;
}
}