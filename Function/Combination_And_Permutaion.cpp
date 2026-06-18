#include <iostream>
using namespace std;

int fact (int x) {
    int result = 1;
    for  (int i = 1; i <= x; i++) {
        result *= i;
    }
    return result;
}


int main () {

int n, r;

cout<<"Enter the 'n' :";
cin>>n;
cout<<"Enter the 'r' :";
cin>>r;

int nfact = fact(n);
int rfact = fact(r);
int nrfact = fact(n-r);
int nCr = nfact / (rfact * nrfact);
cout << "The value of nCr is :" << nCr << endl;
cout << "The value of nPr is :" << nfact / nrfact << endl;

}