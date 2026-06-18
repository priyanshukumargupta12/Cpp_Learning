#include <iostream>
using namespace std;

void print(int n){
    // Base case
    if(n == 0){ 
        return;
    }
    // Call
    print(n- 1);
    // Kaam
    cout<<n<<endl;
}
int main(){
    print(5);
}