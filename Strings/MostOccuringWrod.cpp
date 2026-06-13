#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string str = "Priyanshu is a good coder he is a DSA expert soon";
    stringstream ss(str); 
    string temp;
    vector <string> v;

    while(ss>>temp){
        v.push_back(temp);
    }
        //Vector print
        for(int i = 0; i < v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

        sort(v.begin(), v.end());

        //Vector print
        for(int i = 0; i < v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

        int maxCount = 0;
        int count = 1;
        for(int i = 1; i<v.size(); i++){
            if(v[i] == v[i -1]){
                count++;
            }
            else{
                count = 1;
            }
            // if(count > maxCount){
            //     maxCount = count;
            // }

            maxCount = max(maxCount, count); //Aisai bhi kar skatai hai
        }
        // cout<<"Most Occuring Word: "<<maxCount<<endl;

        count = 1;
        for(int i = 1; i<v.size(); i++){
            if(v[i] == v[i -1]){
                count++;
            }
            else{
                count = 1;
            }

            if(count == maxCount){
                cout<<"Most Occuring Word: "<<v[i]<<" "<<maxCount<<endl;
            }
        }
    
}