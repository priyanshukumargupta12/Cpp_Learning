#include<iostream>
using namespace std;
int main() {
    //Sum of the series-> 1-2+3-4+5.......upto 'n'
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int sum= 0;
    for(int i = 1; i<=n; i++)
    {
      if( i % 2 == 0){
        sum = sum - i;
      }
      else {
        sum = sum + i;
      }
     
    }  
    
    cout<<sum;    
}