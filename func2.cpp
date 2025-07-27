#include<iostream>
using namespace std;

// Calculate sum of digits of a number
int sumDigit(int num) {
    int sum = 0;
    while (num >0) {
    int  lastDigit = num%10;
    num = num/10;
      sum+=lastDigit;
    }
    return sum;
}

// Calculate nCr bionomial coefficient for n & r
int fact(int n) {
    int result = 1;
    for(int i =1; i<=n; i++) {
        result*=i;
    }
    return result;
}
int ncr(int n , int r) {

    return fact(n)/ (fact(r)*fact(n-r));
    
}

int main() {
    //cout<<sumDigit(123456789)<<endl;
    cout<<"NCR IS" <<ncr(6,3)<<endl;
    cout<<ncr(8,2)<<endl;
    cout<<fact(6);
}