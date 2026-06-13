#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m =5;

    vector<vector<int>> pascal;
    for(int i = 0; i <= 5; i++){
        vector<int> a(i);
        pascal.push_back(a);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j <=i; j++)
            if(j == 0 || j == i){
                pascal[i][j] = 1;
            
            }
            else{
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
    }

    // Print the entire 2D vector to see its contents
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <=i; j++) {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

}