#include<iostream>
using namespace std;
int main() {
    //Find nth fibonacci series
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int sum= 1;
   
    for(int i = 0; i<=n; i++)
    {
        cout<<sum<<" ";
        sum = sum + i;
       
        
        
    }     
}