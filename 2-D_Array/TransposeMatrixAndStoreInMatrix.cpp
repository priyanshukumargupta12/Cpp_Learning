#include <iostream>
using namespace std;

int main() { 
    int m;
    cout<<"Enter The Number Of Rows: "<<endl;
    cin>>m;
    int n;
    cout<<"Enter The Number Of Column: "<<endl;
    cin>>n;

    int arr [m][n]; 

    cout<<"Enter The Elements Of 2D Array: "<<endl;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
          cin>>arr[i][j];
        }
        cout<<endl;
    }

    cout<<"The Elements Of 2D Array Are: "<<endl;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
    cout<<"The Transpose Of 2D Array Is: "<<endl;
    // for(int j = 0; j<n; j++){
    //     for(int i = 0; i<m; i++){
         
    //         cout<<arr[i][j]<<" ";
            
    //     }
    //     cout<<endl;
    // }

    int result[n][m]; //Transpose of matrix will be stored in this matrix
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            result[i][j] = arr[j][i];
        }
        cout<<endl;
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
   
    
}