// 1.. #include<iostream>
// #include<vector>
// using namespace std;
// int rectangle(vector <vector<int> > &matrix, int l1, int l2, int r1,int r2){
//     int sum=0;
//     for(int i=l1;i<=l2;i++){
//         for(int j=r1;j<=r2;j++){
// sum+=matrix[i][j];
//         }
//     }
// return sum;
// }
// int main(){
//     int n, m;
//     cin>>n,m;
//    vector<vector<int>> matrix(n,vector<int>(m));
//    for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>matrix[i][j];
//     }
//    }
//    int l1,l2,r1,r2;
//    cin>>l1>>r1>>l2>>r2;
//    for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cout<<matrix[i][j]<<" ";
//     }cout<<endl;
//    }
//    return 0;
// }
// #include <iostream>
// #include <vector>

// using namespace std;

// int rectangle(vector<vector<int>> &matrix, int l1, int l2, int r1, int r2) {
//     int sum = 0;
//     for (int i = l1; i <= l2; i++) {
//         for (int j = r1; j <= r2; j++) {
//             sum += matrix[i][j];
//         }
//     }
//     return sum;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> matrix(n, vector<int>(m));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     int l1, l2, r1, r2;
//     cin >> l1 >> r1 >> l2 >> r2;

//     int sum = rectangle(matrix, l1, l2, r1, r2);
//     cout << "Sum of the rectangle: " << sum << endl;

//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
int rectangle(vector<vector<int> > &matrix, int l1,  int r1, int l2, int r2){

int sum=0;
for(int i=0;i<matrix.size();i++){
    for(int j=1;j<matrix[0].size();j++){
        matrix[i][j]+=matrix[i][j-1];
    }
}
for(int i=0;i<matrix.size();i++){
    if(r1!=0){
    sum+=matrix[i][r1-1];
    }
  else{
    //matrix[i][r1-1]=0
    sum+=matrix[i][r2];
  }
}
return sum;
}
//do with respect to third and fourth 