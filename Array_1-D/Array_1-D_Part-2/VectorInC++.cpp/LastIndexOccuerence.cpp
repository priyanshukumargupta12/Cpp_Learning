#include <iostream>
#include <vector>
using namespace std;

//Find Last Occuerence Of Element X In A Given Array
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
    int idx = -1;
    for(int i = 0; i<=v.size()-1; i++){
        if(v[i] == x){
            idx = i;
        }
    }
    cout<<idx;

    //Another method for finding last occuerence
    
    // for(int i = v.size()-1; i>=0; i--){
    //     if(v[i] == x){
    //         cout<<i;
    //         break;
    //     }
    // }

   
    

}