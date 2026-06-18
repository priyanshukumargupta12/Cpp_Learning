#include<iostream>
using namespace std;
int main() {
    
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=2; i<=n-1; i++) {

        if(n%i==0){
            cout<<n<<" Yes it is a composite number"<<endl;
            break;
        }
        else {
            cout<<n << " No it is not a composite number"<<endl;
            break;
        }
        
    }
   
}
