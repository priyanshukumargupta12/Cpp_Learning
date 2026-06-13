#include <iostream>
using namespace std;

int main() {
    //The number of times the negibouring character are different fro each other
    string str;

    getline(cin, str);
    int count = 0;
    int n = str.length();

    for(int i = 0; i < n; i++){
        if(n==1){
            break;
        }
        if(n==2 && str[0]!=str[1]){
            count = 1;
            break;
        }
        if(str[i] != str[i+1] && str[i] != str[i-1]){
            count++;
        }
    }

    cout<<"Count: "<<count;



}