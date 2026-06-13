#include <iostream>
#include <vector>
using namespace std;

//Write A Program To Copy The Content Of One Array Into Another Array In Reverse Order
void change (vector <int> a){
    
    for(int i = a.size()-1; i>=0; i--){
        cout<<a[i]<<" "; 
    }
    cout<<endl;
}
int main() {
    vector<int> v;  
    
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(5);
    
  
   
    for(int i = 0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    change(v);
   
}