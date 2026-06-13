#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v1;
    cout << "Enter First Sorted Array Length: "<<endl;
    int m;
    cin>>m;
    cout<<"Enter The Element Of First Sorted Array: "<<endl;
    for (int i=0; i<m; i++) {
        int x;
        cin>>x;
        v1.push_back(x);
       
    }
}