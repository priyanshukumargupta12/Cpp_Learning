#include <iostream>
#include <vector>
using namespace std;

//Find The Doublet In The Array Whose Sum Is Equal To The Given Value Of X
int main() {
    vector<int> v;  
    
    v.push_back(6);
    v.push_back(1);
    v.push_back(6);
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    v.push_back(7);
    v.push_back(8);
    
  
   
    for(int i = 0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int x ;
    cout<<"Enter The Element Of X You Want To Last Occuerence In A Given Array : "<<endl;
    cin>>x;
    cout<<endl;
   
    
    for(int i = 0; i<=v.size()-2; i++){
        for(int j = i+1; j<=v.size()-1; j++){
            if(v[i] +v[j] == x){
                cout<<"("<<i<<","<<j<<")"<<" ";
            }
        }
    }
  

}