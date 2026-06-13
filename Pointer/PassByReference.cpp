#include <iostream>
using namespace std;
void swap (int *a, int *b){
int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main() {
    int a;
    int b;
    cout<<"Enter First Number a :"<<endl;
    cin>>a;
    cout<<"Enter Second Number b :"<<endl;
    cin>>b;
    swap(&a , &b);
    cout<<"a = "<<a <<" b = "<<b<<endl;
   
}
