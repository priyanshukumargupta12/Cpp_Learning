#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(4);    // Changed from v1 to v2
    v2.push_back(5);    // Changed from v1 to v2

    vector<int> v3;
    v3.push_back(6);    // Changed from v1 to v3
    v3.push_back(7);    // Changed from v1 to v3
    v3.push_back(8);    // Changed from v1 to v3
    v3.push_back(9);    // Changed from v1 to v3
    v3.push_back(10);   // Changed from v1 to v3

    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    // Print the entire 2D vector to see its contents
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    // Access specific element
    cout << "Element at v[1][1]: " << v[1][1] << endl;

    return 0;
}