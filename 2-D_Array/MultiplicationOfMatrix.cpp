#include <iostream>
using namespace std;

int main() { 
    //Multiplication of matrix required column on one matrix should be equal to row of another matrix that is  if m * n and p * q then n == p  
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
//Always remeber one thing that give  n == x when you enter the rows and column for both matrices 
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

    //Resultant matrix 
    int ress[m][y] = {0}; //Resultant matrix rows and column are m and y respectively

    for(int i = 0; i<m; i++){
        for(int j = 0; j<y; j++){
            for(int k = 0; k<x; k++){
                // res[m][y] = 0;
                ress[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }

    //Print resultant matrix

    for(int i = 0; i<m; i++){
        for(int j = 0; j<y; j++){
            cout<<ress[i][j]<<" ";
        }
        cout<<endl;
    }


    

}