#include<iostream>
using namespace std;

// Copy of argument is passed to function - Pass by value
int sum(int a,int b) {
    int sum = a+b;
    return sum;
}
int multi(int c,int d) {
    c+=4;
    d+=2;
    return c*d;
}
int changeN(int n) {
    n*=2;
    cout<<"n = "<<n<<endl;
}
int main() {
    int x ,y;
    cout<<"Value of x : \n";
    cin>>x;
    cout<<"Value of y : \n";
    cin>>y;
    cout<<"Sum = "<<sum(x,y)<<endl;

    int c = 2;
    int d = 3;
    cout<<"Multiplication = "<<multi(c,d)<<endl; 
    cout<<c<<endl;
    cout<<d<<endl; 
    
    int n = 4;
    changeN(n);
    cout<<"n = "<<n<<endl;

    
    
    //value of main function will not change.....in case of pass by reference we pass the address 
    // Whenever we pass premetive data type, it is always pass by value
}