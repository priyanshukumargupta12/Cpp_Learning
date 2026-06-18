 // 1, 1, 2, 3 , 5, 8 , 13, 21, 34, 55, 89,.... 
 // fibonacii(n) = fibonacii(n-1) + fiboncii(n-2);
 #include <iostream>
 using namespace std;

 int fibonacii(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    return fibonacii(n-1) + fibonacii(n-2);
    
 }

 int main(){
  cout<<fibonacii(10)<<" ";
 }