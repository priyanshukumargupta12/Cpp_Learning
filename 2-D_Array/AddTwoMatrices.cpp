#include <iostream>
using namespace std;

int main() { 
    //For addition of two matrices the number of rows and coumn of both matrices should be same
    int m;
    cout<<"Enter The Number Of Rows For First Matrice: "<<endl;
    cin>>m;
    int n;
    cout<<"Enter The Number Of Column For First Matrice: "<<endl;
    cin>>n;

    int arr [m][n]; 

    cout<<"Enter The Elements Of First Matrice: "<<endl;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
          cin>>arr[i][j];
        }
        cout<<endl;
    }

    cout<<"Printing The First Matrice"<<endl;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int x;
    cout<<"Enter The Number Of Rows For Second Matrice: "<<endl;
    cin>>x;
    int y;
    cout<<"Enter The Number Of Column For Second Matrice: "<<endl;
    cin>>y;

    int arr1 [x][y]; 

    cout<<"Enter The Elements  Second Matrice: "<<endl;
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
          cin>>arr1[i][j];
        }
        cout<<endl;
    }

    cout<<"Printing The Second Matrice"<<endl;
    for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Sum Of Two Matrices: "<<endl;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j] + arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}