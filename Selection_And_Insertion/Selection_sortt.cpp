#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {5, 8, 4, 6, 2};
    int n = 5;
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    //Slection sort
    for(int i = 0; i < n-1; i++) {
        int min = INT_MAX;
        int mindx = -1; //we assume initally min index
        for(int j = i; j < n; j++) {
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mindx];
        arr[mindx] = temp;
       // swap(arr[i],arr[mindx]);

    }
    cout<<endl;
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    
}