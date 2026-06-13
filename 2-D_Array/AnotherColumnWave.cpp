#include <iostream>
using namespace std;

int main() { 
    //Write a programe to print the matrix in wave form.
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

    cout<<"Printing The Matrix In Wave Form"<<endl;
    for(int i = 0; i<n; i++){
        if(i%2==0){
            for(int j = 0; j<m; j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j = m-1; j>=0; j--){
         
                cout<<arr[j][i]<<" ";
            }
        }
    }
    
}