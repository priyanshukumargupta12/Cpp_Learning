#include <iostream>
#include <vector>
using namespace std;

void change (vector <int> a){
    a[0] = 100;
    for(int i = 0; i<=a.size()-1; i++){
        cout<<a[i]<<" "; //Yaha clearly dekh saktai hai ki jab vector ko pass kar rahai hai toh new vector create ho rha hai a naam ka jo v kai jaisa simlar hai isliyai yaha nichai jab bhi fucntion ko call kar rhai hai pr to v vector mai change nahi ho raha hai
    } //Toh iss nayai vector a ka adress different hoga memory mai v vector kai mukabalai
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
    for(int i = 0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }


}