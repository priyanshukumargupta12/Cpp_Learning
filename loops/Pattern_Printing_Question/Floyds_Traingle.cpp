#include<iostream>
using namespace std;
int main() {
  
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int m = 0;
    for(int i = 1; i<=n ; i++) {
      
        for(int j = 1; j<=i; j++){
            m = m + 1;
            cout<<m<<" ";
       
        }
       
      cout<<endl;
        
    }
}