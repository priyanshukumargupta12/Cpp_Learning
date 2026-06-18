#include <iostream>
using namespace std;

int main () {
int  arr[7] = { 90, 33, 45, 32, 98, 31, 94};
int * ptr = arr;


for(int i = 0; i<=6; i++) {
    cout<<ptr[i]<<" "; //Yaha agr pointer ko address daide array ka toh pointer ka pass takat hai ki us array ko use kar sakta hai par jab varible mai kartai the toh error daideta tha
}
ptr[0] =100; //Using pointer we can also modify the array 

cout<<endl<<"Modified Array Using Pointer Also Posible : ";

for(int i = 0; i<=6; i++) {
    cout<<ptr[i]<<" ";
}

*ptr =40; //Isai sirf first element ka access hai but hmai agr maan lo or koi index pada elemnt ko access karna haa ya change karna hua toh

cout<<endl<<"Again Modified Array Using * Pointer Also Posible : ";

for(int i = 0; i<=6; i++) {
    cout<<ptr[i]<<" ";
}


}