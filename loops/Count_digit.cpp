#include<iostream>
using namespace std;
int main() {
    //Count digit of a given number
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int count = 0;
    int a = n;
    while (n>0)
    {
       n = n / 10;
       count++;
    }
    if(a==0){
        cout<<1;
    }
    else{
        cout<<count;
    }
}