#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v1;
    cout << "Enter First Sorted Array Length: "<<endl;
    int m;
    cin>>m;
    cout<<"Enter The Element Of First Sorted Array: "<<endl;
    for (int i=0; i<m; i++) {
        int x;
        cin>>x;
        v1.push_back(x);
       
    }

    vector <int> v2;
    cout << "Enter Second Sortted Array Length: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter The Element Of Second Sorted Array: "<<endl;
    for (int i=0; i<n; i++) {
        int y;
        cin>>y;
        v2.push_back(y);
    }
    
    cout<<"The Merged Sorted Array Is: "<<endl;
    vector <int> res(m+n);
    int i=0;
    int j=0;
    int k=0;
   
    while (i<=m && j<=n)
    {
        if(v1[i]<v2[j]){
            res[k] = v1[i];
            i++;
        }
        else {
            res[k] = v2[j];
            j++;
        }
        k++;

    }
    //For Remaining Element

    if(i==m){
        while(j<n-1){
            res[k] = v1[j];
            j++;
            k++;
        }
    }

    if(i==n){
        while(j<m-1){
            res[k] = v2[i];
            j++;
            k++;
        }
    }
    cout<<"The Merge Sorted Array Is: "<<endl;
    for(int l=0; l<=(m+n); l++){
        cout<<res[l]<<" ";
    }
}