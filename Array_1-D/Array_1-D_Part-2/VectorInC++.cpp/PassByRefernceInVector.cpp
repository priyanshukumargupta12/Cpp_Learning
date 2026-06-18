#include <iostream>
#include <vector>
using namespace std;

//Bas aik chota sa vhange kiyai hai bas vector <int> &a itna kiyai hai to vector change hogya hai  mtlab value change hogya hai v vector ka jab call lagayai function ko or new vector bhi create nahi hua
void change (vector <int> &a){ 
    a[0] = 100; //Yaha hum dekh saktai hai ki a and v vector dono ka adress same hai jo aik hi point ko point kar raha hai
   
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