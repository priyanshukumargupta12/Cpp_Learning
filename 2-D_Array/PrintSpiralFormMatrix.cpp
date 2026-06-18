#include <iostream>
using namespace std;

int main() { 
    //Write a programe to print the matrix in spiral form.
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

    cout<<"Printing The Matrix In Spiral Form"<<endl;
    int minr = 0;
    int minc = 0;
    int maxr = m-1;
    int maxc = n-1;

    while(minr<=maxr && minc<=maxc){
        //print the first row
        for(int i = minc; i<=maxc; i++){
            cout<<arr[minr][i]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc){
            break;
        }
        //print the last column
        for(int i = minr; i<=maxr; i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc){
            break;
        }
        //print the last row
        for(int i = maxc; i>=minc; i--){
            cout<<arr[maxr][i]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc){
            break;
        }
        //print the first column
        for(int i = maxr; i>=minr; i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}