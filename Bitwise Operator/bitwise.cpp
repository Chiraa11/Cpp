#include<iostream>
using namespace std;
int main() {
    int a = 4, b = 5;
    cout<<(a&b)<<endl;  // bitwise AND
    cout<<(a|b)<<endl; // bitwise OR
    cout<<(a^b)<<endl; // bitwise XOR (exclusive OR) [same - 0, diff - 1]


    //Bitwise leftshift (<<) and bitwise rightshift (>>) operators
    cout<<(a<<1)<<endl; 
    cout<<(10<<2)<<endl; // a<<b....a*2^b
    cout<<(a>>1)<<endl;  // a>>b means a/2^b

}