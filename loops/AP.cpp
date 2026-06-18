#include<iostream>
using namespace std;
int main() {
    //Ap sequence is 1,3,5,7,9....n
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1; i<=2*n-1; i= i+2) {
        cout<<i<<endl;
    }

    int a, d, m;
    cout<<"Another method by asking first term and common difference from user"<<endl;
    cout<<"Enter Your First term"<<endl;
    cin>>a;
    cout<<"Enter Your Common Difference For Generating Arithmetic Progression Sequence"<<endl;
    cin>>d;
    cout<<"Enter Your mth Term"<<endl;
    cin>>m;
    //Formula for arithmetic progression is an = a + (n-1)*d
    for(int i=1; i<=a + (m-1)*d; i = i + d) {
        cout<<i<<endl;
    }

}

