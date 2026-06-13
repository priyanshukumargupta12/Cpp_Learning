#include<iostream>
using namespace std;
int main() {
    //Find factorial of given number
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    long mul= 1;
    for(long i = 1; i<=n; i++)
    {
        mul = mul * i;
    }  


    cout<<mul;    
}