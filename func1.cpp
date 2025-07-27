#include<iostream>
using namespace std;
// Function to add numbers
int Sum(int a, int b) {
    int sum = a+b;
    return sum;
}
//to substract
double substract( double c, double d) {
    double sub = c-d;
    return sub;
}
// min of two
int minOfTwo(int x,int y) { //parameters
    if(x<y) {
        return x;
    } else {
        return y;
    }
}
// Sum of 1 to n
int sumN(int x) {
    int sum = 0;
    for(int i =0; i<=x ; i++) {
        sum = sum+i;
    }
    return sum;
}
//Factorial
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
cout<<Sum(2,3)<<endl;
cout<<Sum(8,9)<<endl;
cout<<Sum(6,3)<<endl;
cout<<Sum(4,3)<<endl;
cout<<Sum(1,9)<<endl;
cout<<Sum(4354654,7567475)<<endl;
cout<<substract(8.64652,4.539743)<<endl;
cout<<"Min = "<<minOfTwo(64,8765)<<endl; //arguments
cout<<sumN(100)<<endl;
cout<<factorial(4);

}
//Avoid redundancy (unneccessary repeatation of code)