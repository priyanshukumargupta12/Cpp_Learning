#include <iostream>
using namespace std;
 int main () {
    cout<<sizeof(int)<<" Byte "<<endl;
    cout<<sizeof(char)<<" Byte "<<endl;
    cout<<sizeof(float)<<" Byte "<<endl;
    cout<<sizeof(bool)<<" Byte "<<endl;
    cout<<sizeof(double)<<" Byte "<<endl;
    cout<<sizeof(long)<<" Byte "<<endl;
    cout<<sizeof(long long)<<" Byte "<<endl;

    int x = 5;
    cout<<" Address of x is: "<<&x<<" And The Vaule of x: "<<x<<endl;
 }