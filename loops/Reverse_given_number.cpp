#include<iostream>
using namespace std;
int main() {
    //Reverse of a given number
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int lastdigit = 0;
    while (n>0)
    {
       lastdigit = n % 10;
       cout<<lastdigit;
       n = n / 10;
      
    }     



    
    cout<<"Another method"<<endl;
    int m;
    cout<<"Enter a number"<<endl;
    cin>>m;
    int lastnumber =0;
    int reverse = 0;
    while (m>0)
    {
        lastnumber = m % 10;
        reverse = reverse * 10;
        reverse = lastnumber + reverse;
        m = m / 10;
    }
    cout<< reverse <<endl;

}