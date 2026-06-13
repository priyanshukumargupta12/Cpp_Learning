#include <iostream>
using namespace std;
int main () {

int  arr[] = { 90, 33, 45, 32, 98, 31, 94,};

cout<<sizeof(arr)<<endl; //1 integer element occuipeied 4 byte so 7 elemnt that is array size 7 occupied 7 * 4 = 28

cout<<sizeof(arr)/sizeof(arr[0])<<endl; //-It return size of array
cout<<sizeof(arr)/4; //It also return size of array beacuse we divide by 4 because we know 1 integer will occupie 4 byte of space in memory

}