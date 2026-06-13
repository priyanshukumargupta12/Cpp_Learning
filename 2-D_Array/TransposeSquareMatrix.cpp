#include <iostream>
using namespace std;

int main() { 
    int n;
    cout<<"Enter The Number Of Column: "<<endl;
    cin>>n;

    int arr [n][n]; 

    cout<<"Enter The Elements Of 2D Array: "<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
          cin>>arr[i][j];
        }
        cout<<endl;
    }

    cout<<"The Elements Of 2D Array Are: "<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
    cout<<"The Transpose Of 2D Square Array Is: "<<endl;
    for(int j = 0; j<n; j++){
        for(int i = 0; i<n; i++){
         
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }



    // int result[n][n]; 
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         result[i][j] = arr[j][i];
    //     }
    //     cout<<endl;
    // }

    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         cout<<result[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
   
    
}