#include<iostream>
using namespace std;
int binaryToDec(int n) {
     int rem, ans = 0, pow = 1;
     while (n>0) {
        rem = n % 2;
        n = n/10;
        ans = ans + (pow * rem);
        pow = pow *2;
     }
    return ans;
}

int main() {
    int x;
    cout<<"Enter the number : ";
    cin>>x;

    cout<<"Here is your answer : "<<binaryToDec(x);
}
