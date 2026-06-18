// #include <iostream>
// using namespace std;
// int main () {
// int n;
// cout<<"Enter Size Of Array: "<<endl;
// cin>>n;
// int  arr[n];
// cout<<"Enter Elemnt Of Array: ";
// for (int i=0; i<n; i++){
//  cin>>arr[i];
// }
// int x;
// cout<<"Enter A Element You Want To Search : "<<endl;
// cin>>x;
// for (int i=0; i<n; i++){
//     if(arr[i]==x){
//         cout<<"Element Found At Index : "<<i<<endl;
//         break;
//     }
//     else {
//         continue;

//     }
// }

// }

//Use Checkmark that is bolean 
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
int x;
cout<<"Enter A Element You Want To Search : "<<endl;
cin>>x;

bool flag = false; //Bydefault we are assuming that element is not present in the array

for (int i=0; i<n-1; i++){
    if(arr[i]==x){
        flag = true; //Element is persent is array
        cout<<"Element Found At Index : "<<i<<endl;
        break;
    }
    
}
if (flag == false){
    cout<<"Element Not Found In The Array"<<endl;
}
}