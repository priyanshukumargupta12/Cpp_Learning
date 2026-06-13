#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    //Valid for lowercase alphabet characters only
    string str;

    getline(cin, str);
    int n = str.length();
    vector <int> arr(26 ,0); //Specal type of array or vector which is used to store the frequency of each charachter in the string. Here 26 is the size or array vector and in each index we store 0
    for(int i = 0; i < n; i++){
        char ch = str[i];
        int ascii = int (ch);
        arr[ascii - 97]++; //Here we are storing the frequency of each charchacter  in the array vector. Here 97 is the ascii value of 'a' and we are substracting it from the ascii value of the charchter toget the index of the array vector that is for 'l' => 108 -97 = 11 so at the index 11 postion we store the frequency of 'l' charchter.
    }

    int max = 0;

    for (int i = 0; i < 26; i++){
        if(arr[i] > max){
            max = arr[i]; //Here we are getting the maximum frequency of the charchter in the string.
        }
    }

    for(int i = 0; i < 26; i++){
        if (arr[i] == max){
            int ascii = i + 97;
            char ch = (char)ascii;
            cout<<ch<<" "<<max<<endl;
        }
    }

}