#include <iostream>
using namespace std;

int main() {
    int x, y; 
    int *p1 = &x;
    int *p2 = &y;

    cout<<"Enter Your First Number: "<<endl;
    cin>>*p1;
    cout<<"Enter Your Second Number: "<<endl;
    cin>>*p2;
    cout<<*p1 + *p2<<endl;
    cout<<x +y<<endl;
}