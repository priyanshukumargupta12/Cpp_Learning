#include <iostream>
using namespace std;

int main() { 
    int m;
    cout<<"Enter The Number Of Students: "<<endl;
    cin>>m;
    int n;
    cout<<"Enter The Number Of Marks: "<<endl;
    cin>>n;

    int arr [m][n]; 

    cout<<"Enter First Roll Number Of Students And Then Also Provide Marks: "<<endl;
    for(int i = 0; i<=1; i++){
        for(int j = 0; j<=3; j++){
          cin>>arr[i][j];
        }
       
    }

    cout<<"Print Roll Number And Marks :"<<endl;
    for(int i = 0; i<=1; i++){
        for(int j = 0; j<=3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}