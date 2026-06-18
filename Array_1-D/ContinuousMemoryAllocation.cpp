#include <iostream>
using namespace std;
int main () {

int  arr[] = { 90, 33, 45, 32};
cout<<&arr<<endl; //Yai bhi valid hai and array ka address array kai first element kai adrress hi hota hai iska matalb array ka v khud ka kuch address hota hai
cout<<arr<<endl; //&arr and arr both ko print karnai ki kosis kar rahai hai to same hi chiz de rahai hai jo ki adrees hai adress 
for (int i=0; i<4; i++){
    cout<<&arr[i]<<endl;
}

}