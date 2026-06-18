#include <iostream>
using namespace std;

int main () {
// int arr[7] = {2, 3, 6, 5, 7, 9, 4};
int arr[7]; 

//Taking Input
cout<<"Enter Element Of Array :"<<endl;
for(int i = 0; i<=6; i++) {
    cin>>arr[i];
}

//Printing Output
cout<<"Your Array Element Is This :";
// cout<<arr[5]<<endl;
for(int i = 0; i<=6; i++) {
    cout<<arr[i]<<" ";
}

}