#include <iostream>
using namespace std;
//Find The Maximum Value Out Of All The Elements In The Array
int main () {
int n;
cout<<"Enter Size Of Array: "<<endl;
cin>>n;
int  arr[n];
cout<<"Enter Elemnt Of Array: ";
for (int i=0; i<n; i++){
 cin>>arr[i];
}
int max = arr[0]; //Assumeing that first element is the maximum value
for (int i=0; i<n; i++){
    if(max<arr[i]){
        max = arr[i];
    }
}
cout<<"Maximum Value In The Array Is : "<<max<<endl;

}