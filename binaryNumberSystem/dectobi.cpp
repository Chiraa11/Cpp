#include<iostream>
using namespace std;
int decToBinary (int n) {
    int ans = 0;
    int pow = 1;
    int rem;
    while (n>=1) {
        rem = n%2;
        n = n/2;
        ans = ans + (pow*rem);
        pow = pow*10;
          
    }
    return ans;
}

int main() {
    int x;
    cout<<"Enter the number : ";
    cin>>x;

    cout<<"Here is your answer : " <<decToBinary(x);


}