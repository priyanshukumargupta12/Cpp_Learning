#include<iostream>
using namespace std;
int main() {
    //Prie number -> The number which is divisible by 1 or itself
    //Check prime number or not 
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    bool flag = true; // true means prime
    for(int i=2; i<=n-1; i++) {
        if(n%i==0) { //i is factor of n
            flag = false; //false means comoposite
            break;
        }
    
    }
    if(n==1) {
        cout<<"1 is nethier a prime nor a comosite number";
    }
    else if(flag==true){
        cout<<n<< " is  prime ";
    } 
    else {
        cout<<n<< " is composite";
    }
}
