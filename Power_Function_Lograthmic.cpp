#include <iostream>
using namespace std;
//Method 1 long call --> Yaha pai ho rha hai 3 * 3 * 3 * 3 * 3 * 3  -> Total 6 baar call ja rha hai bekar method
//int power(int x, int n){  // total call 1 +2 + 4+ 8....n = (2n - 1) => O(n) worst timecomplaxity but hum chatai hai  ki O(Log n) aay
//     if(n ==0){
//         return 1;
//     }
//     if(n == 1){
//         return x;
//     }
//     return x * power(x, n-1);
// }

// Method 2 short call 

int power(int x, int n){
    if(n == 1){
        return x;
    }
    int ans;
    if (n  % 2 == 0){
       return  ans = power(x, n/2);
    }
    else{
       return ans = power(x, n/2)*x;
    }
    
    return ans*ans;
}


int main(){
    cout<<power(3, 6);
}