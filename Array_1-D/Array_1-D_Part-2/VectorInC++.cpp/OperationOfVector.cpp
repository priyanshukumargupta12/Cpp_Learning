#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> v;  
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(5);
    
   
    v[0] = 88;
    
    for(int i = 0; i<=3; i++){
        cout<<v[i]<<" ";
    }


}