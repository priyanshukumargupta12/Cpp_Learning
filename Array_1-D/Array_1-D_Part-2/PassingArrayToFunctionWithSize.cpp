#include <iostream>
using namespace std;
//Accessing the element of array in another function
//Updation, pass by value and pass by reference

void display (int a[], int size){ // yaha arr[] , a[] and b[] sara same hai bss naam alg hai lekin jab variable pass kartai the to us time different hota tha
    
    for(int i = 0; i<=size-1; i++){ //Yaha sab kuch thik hai phir bhi hum size pass kar rahai qki jo int a[] yai aik pointer hai jo adress ko store kar raha hai arr[] ka and jab hamai loop lagan hoga to size kai basis pai hi na lagygai qki alyaws thori na pta oga ki kitna baar loop lagana hai array ko print karnai kai liayai
        cout<<a[i]<<" ";
    }
}

void change (int b[], int size){
    b[0]=100;
}

int main () {

int  arr[] = { 1, 2, 5, 7, 9};
int size = sizeof(arr)/sizeof(arr[0]);
cout<<size<<endl;
display(arr, size); //Yaha jitna baar bhi array pass karnai ki kosis kar rahai wo actually array nhi arr[] iska adress pass ho raha hai that is reference pass kar rahai hai
change(arr, size); 
display(arr, size);
//Array kabhi bhi pass by value nhi hota array hamesa pass by reference hota hai

}
