#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> v(5,7); //Vector of size = 5 ,each element is 7
    
    for(int i = 0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }


}