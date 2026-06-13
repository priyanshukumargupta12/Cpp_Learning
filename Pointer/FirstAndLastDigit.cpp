#include <iostream>
using namespace std;

void findx(int n, int *ptr1, int *ptr2){
    *ptr2 = n%10;
    while(n>9) {
        n/10;
    }
    *ptr2 = n;
}

int main() {
    int n;

    cout<<"Enter A Number n :"<<endl;
    cin>>n;
    int FirstDigit;
    int LastDigit;
    int *ptr1 = &FirstDigit;
    int *ptr2 = &LastDigit;
    findx(n, ptr1, ptr2);
    cout<<"First Digit: "<<FirstDigit<<" Last Digit: "<<LastDigit<<endl;

}