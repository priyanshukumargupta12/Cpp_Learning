#include <iostream>
using namespace std;
int main() {
    int arr[6] = {5, 6, 3, 2, 1, 4};
    int n = 6;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    for(int i = 0; i < n-1; i++) { //n-1 passes 
        bool flag = true;
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false; 
            }
        }
        if(flag==true){ //swap didn't happen
            break;
        }
    }


    cout<<endl;

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}