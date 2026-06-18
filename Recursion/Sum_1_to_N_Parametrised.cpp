#include <iostream>
using namespace std;

void sumfunction(int sum, int n){
    if(n == 0){
        cout<<sum<<endl;
    }
    sumfunction(sum + n, n-1);
}
int main(){
    int n;
    cout<<"Enter A Number ";
    cin>>n;
    int sum = 0;
    sumfunction(sum, n);
    
}