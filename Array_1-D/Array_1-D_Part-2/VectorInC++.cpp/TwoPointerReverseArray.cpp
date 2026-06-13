#include <iostream>
#include <vector>
using namespace std;

//Write A Program To Reverse The Array Without Using Any Extra Array -> Two Pointer 

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
    int i = 0;
    int j = v.size()-1;
    while (i<=j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    for(int i = 0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }
   
}