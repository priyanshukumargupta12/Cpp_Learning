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
    for(int i = 0; i<=2; i++){
        for(int j = 0; j<=2; j++){
          cin>>arr[i][j];
        }
        cout<<endl;
    }
    int sum = 0;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            sum = sum + arr[i][j];
        }
    }
    cout<<"Sum Of All Elements Of 2D Array: "<<sum<<endl;
    
}