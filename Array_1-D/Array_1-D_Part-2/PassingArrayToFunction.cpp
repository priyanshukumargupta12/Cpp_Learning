#include <iostream>
using namespace std;
//Accessing the element of array in another function
//Updation, pass by value and pass by reference

void display (int a[]){ // yaha arr[] , a[] and b[] sara same hai bss naam alg hai lekin jab variable pass kartai the to us time different hota tha
    
    for(int i = 0; i<=4; i++){
        cout<<a[i]<<" ";
    }
}

void change (int b[]){
    b[0]=100;
}

int main () {

int  arr[] = { 1, 2, 5, 7, 9};
display(arr); //Yaha jitna baar bhi array pass karnai ki kosis kar rahai wo actually array nhi arr[] iska adress pass ho raha hai that is reference pass kar rahai hai
change(arr);
display(arr);
//Array kabhi bhi pass by value nhi hota array hamesa pass by reference hota hai

}