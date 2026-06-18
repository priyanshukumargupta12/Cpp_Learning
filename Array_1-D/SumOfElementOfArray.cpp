#include <iostream>
using namespace std;
int main () {
int n;
cout<<"Enter Size Of Array: "<<endl;
cin>>n;
int  arr[n];
cout<<"Enter Elemnt Of Array: ";
for (int i=0; i<n; i++){
 cin>>arr[i];
}

int sum = 0;

for (int i=0; i<n; i++){
 sum = sum + arr[i];
}
cout<<"Sum Of Element Of Array : "<<sum<<endl;

}