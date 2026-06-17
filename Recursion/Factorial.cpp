#include <iostream>
using namespace std;

int factorial(int n){
    // Base case
    if(n == 1 || n == 0){
        return 1;
    }
    // Recursive call
    return  n * factorial(n-1);
    
}

int main(){
    int res = factorial(5);
    cout<<"The value of factorial is "<<res<<endl;
    
}