#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() { //Anamgram means two word or string contain the same character with the same frequency but possibly in different order
   
    string str1 = "Priyanshu";
    string str2 = "Panshuyir";

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 == str2){
        cout<<true; //1 means it is a anagram
    }
    else{
        cout<<false; //0 means it is not a anagram
    }
}