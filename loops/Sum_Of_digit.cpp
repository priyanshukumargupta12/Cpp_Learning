#include<iostream>
using namespace std;
int main() {
    //Sum of digit of a given number
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int lastdigit = 0;
    int a = n;
    while (n>0)
    {
       lastdigit = lastdigit + n % 10;
       n = n / 10;
      
    }    
        cout<<lastdigit;
}