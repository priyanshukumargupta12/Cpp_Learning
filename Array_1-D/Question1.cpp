#include <iostream>
using namespace std;
//Given an array of marks of students, if the marks of any student is less than 35 print its roll number.[roll number here refer to the index of the array]
int main () {

int  marks[7] = { 90, 33, 45, 32, 98, 31, 94};


//Printing Output
cout<<"The Student Whose Marks Is Less Than 35 : ";
// cout<<arr[5]<<endl;
for(int i = 0; i<=6; i++) {
    if(marks[i]>35){
        continue;
    }
    else {
        cout<<i<<" ";
    }
   
}

}