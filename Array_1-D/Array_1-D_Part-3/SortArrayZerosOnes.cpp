#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// int main() {
//     vector<int> v; 
//     int n;

//     cout << "Enter the size of the array or vector: ";
//     cin >> n;

//     cout << "Enter the elements (0's and 1's only):" << endl;
//     for (int i = 0; i < n; i++) {  
//         int x;
//         cin >> x;

//         if (x == 0 || x == 1) {  
//             v.push_back(x);
//         } else {
//             cout << "Please enter 0 or 1 only." << endl;
//             i--; 
//         }
//     }

//     cout << "Entered array/vector: ";
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     // Sorting the vector
//     sort(v.begin(), v.end());

//     cout << "Sorted array/vector: ";
//     for (int i = 0; i < v.size(); i++) {  
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     return 0;  
// }

//Another Method To Do without using sort(v.begin(), v.end()) method
// void change( vector<int>& v ){
//     int n = v.size();
//     int noo = 0;
//     int noz = 0;
   
//     for (int i = 0; i < n; i++) {  
//       if(v[i]==0) noz++;
//       else noo++;
//     }

//     //Fillng Elements
//     for (int i = 0; i < n; i++) {  
//         if(i<noz) v[i]=0;
//         else v[i]=i;
//       }

// }
// int main (){
//     int m;
//     vector<int> v; 
//     cout << "Enter the elements (0's and 1's only):" << endl;
//     for (int i = 0; i < m; i++) {  
//         int x;
//         cin >> x;  
//         v.push_back(x);
//     }
//     change(v);

// }

//Another method to solve by travelling one time into array using two pointer -> two variable

int main() {
        vector<int> v; 
        int n;
    
        cout << "Enter the size of the array or vector: ";
        cin >> n;
    
        cout << "Enter the elements (0's and 1's only):" << endl;
        for (int i = 0; i < n; i++) {  
            int x;
            cin >> x;
            v.push_back(x);
    
        }
    
        int i = 0;
        int j = n - 1;
        while (i < j) {
            if (v[j] == 1) {
                j--;
                continue;
            }
            if (v[i] == 0) {
                i++;
                continue;
            }
            if (v[i] == 1 && v[j] == 0) {
                swap(v[i], v[j]);
                i++;
                j--;
            }
        }

        // Add this to print the sorted array
        cout << "Sorted array/vector: ";
        for (int i = 0; i < v.size()-1; i++) {
            cout << v[i] << " ";
        }
}
