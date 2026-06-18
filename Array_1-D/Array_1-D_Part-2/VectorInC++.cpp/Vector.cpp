#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> v;  //You need not maintaion the size
    //Inserting / Input do not use []
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(5);
    
    //If you want to update / acess
    v[0] = 88;
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    for(int i = 0; i<=3; i++){
        cout<<v[i]<<" ";
    }


}