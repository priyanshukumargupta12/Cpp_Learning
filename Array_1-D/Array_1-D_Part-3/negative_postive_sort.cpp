#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v; 
    int n;

    cout << "Enter the size of the array or vector: ";
    cin >> n;

    cout << "Enter the elements Negative And Non-Negative Array Or Vector :" << endl;
    for (int i = 0; i < n; i++) {  
        int x;
        cin >> x;
        v.push_back(x);
       
    }

    cout << "Entered array/vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Sorting the vector
    sort(v.begin(), v.end());

    cout << "Sorted array/vector: ";
    for (int i = 0; i < v.size(); i++) {  
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;  
}