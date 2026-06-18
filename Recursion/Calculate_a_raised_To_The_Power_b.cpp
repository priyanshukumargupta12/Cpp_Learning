#include <iostream>
using namespace std;

int print(int a, int b){
    if(b == 0){
        return 1;
    }
    return a * print(a , b-1);
}
int main(){
    int res = print(2, 3);
    cout<<res<<endl;
} 