#include<iostream>
using namespace std;
int main() {
    int n;
    int m;
    cout<<"Enter The Row"<<endl;
    cin>>n;
    cout<<"Enter The Colmun"<<endl;
    cin>>m;
    for(int i = 1; i<=n ; i++) {
        for(int j = 1; j<=m; j++){
            cout<<" * ";
            
        }
        cout<<endl;
      
    }
}