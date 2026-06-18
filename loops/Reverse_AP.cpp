#include<iostream>
using namespace std;
int main() {
    //Ap sequence is n,n-1,.....,1
    
    int a, d, m;
    cout<<"Another method by asking first term and common difference from user"<<endl;
    cout<<"Enter Your First term"<<endl;
    cin>>a;
    cout<<"Enter Your Common Difference For Generating Arithmetic Progression Sequence"<<endl;
    cin>>d;
    cout<<"Enter Your mth Term"<<endl;
    cin>>m;
    //Formula for arithmetic progression is an = a + (n-1)*d
    for(int i=a + (m-1)*d; i>=1; i = i - d) {
        cout<<i<<endl;
    }

}