#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string str = "priyanshu is a good coder";
    stringstream ss(str); //stringstream is used to convert the string into stream of words.
    string temp;

    while(ss>>temp){
        //ss mai sai string lelo or temp mai daal kar temp ko print kar do
        cout<<temp<<endl;
    }
}