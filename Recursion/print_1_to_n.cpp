#include <iostream>
using namespace std;

void print(int i, int n){ //Here we use extra parameter
    if(i>n){
        return;
    }
    cout<<i<<endl;
    print(i + 1, n);
}
int main(){
    int n;
    cout<<"Enter A Number ";
    cin>>n;
    print(1, n);
}