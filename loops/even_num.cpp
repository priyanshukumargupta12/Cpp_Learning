#include<iostream>
using namespace std;
int main() {
    cout<<"For even Number"<<endl;
    for(int i=1; i<=10; i++) {
        if (i%2==0){
        cout<<i<<endl;
        }
        else {
            continue;
        }
    }

cout<<"For Odd Number"<<endl;
for(int i=1; i<=10; i++) {
    if (i%2==!0){
    cout<<i<<endl;
    }
    else {
        continue;
    }
}
}
