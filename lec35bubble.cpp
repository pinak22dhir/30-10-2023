// #include<iostream>
// #include<vector>
// using namespace std;//ascending order 
// void bubblesort(vector<int> &v){
// int n=v.size();
// for(int i=0;i<=n-1;i++){
//     for(int j=0;j<n-1-i;j++){
//         if(v[j]>v[j++])
//         swap(v[j], v[j+1]);
//     }
// }
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     bubblesort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector<int> &v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] < v[j + 1]) {
                // swap(v[j], v[j + 1]);
                swap(v[j+1], v[j]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    bubblesort(v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
