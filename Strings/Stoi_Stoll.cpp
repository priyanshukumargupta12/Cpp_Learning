#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str = "15"; //This is string

    int x = stoi(str); //Basically it convert a srting into an integer
    cout << x <<endl;
    cout <<x + 1 <<endl;

    int a = 12345;
    cout<< a + 1 <<endl;
    string str2 = to_string(a); //This is used to convert an integer into a string
    cout << a << endl;

    string str3 = "123456789235";
    long long b = stoll(str3); //This is used to convert a string into a long long integer
    cout << b << endl;
}