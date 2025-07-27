#include<iostream>
using namespace std;
// Check if a number is prime or not
int checkPrime(int n) {
    if(n<2) {
        cout<<"Not prime.\n";
        return 0;
    } else {
        for(int i = 2; i<n; i++) {
            if(n%i == 0) {
                cout<<"Not Prime\n";
                return 0;
            }
        }
    }
    cout<<"Yes ! it is a prime number."<<endl;

}

//Print all Ptime numbers from 2 to N.
bool isPrime(int z) {
        if(z<2) 
            return false;
            for(int j = 2; j<z; j++) 
                if(z % j == 0)
                return false;   
        return true;
    }

void printPrime(int a) {
    cout<<"Prime numbers upto "<<a<<" are : "<<endl;
    for(int k = 0; k<=a ; k++) 
    if(isPrime(k)) 
      cout<<k<<" ";
      cout<<endl;
}

int main() {
    int x,y;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"Enter the number to print all prime numbers from 2 to the number :";
    cin>>y;
    checkPrime(x);
    printPrime(y);
}