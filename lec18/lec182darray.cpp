#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int r1,c1;
//     cin>>r1>>c1;
//     int A[r1][c1];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             cin>>A[i][j];
//         }
//     }
// int r2,c2;
// cin>>r2>>c2;
// int B[r2][c2];
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             cin>>B[i][j];
//         }
//     }
//     if(c1!=r2){
//         cout<<"matrix multiplication not possible";
//     }
//     int C[r3][c3];
//     for(int i=0;i<r3;i++){
//         for(int j=0;j<c3;j++){
//             int value=0;
//             for(int k=0;k<r2;k++){
//                 value +=A[i][k]*B[k][j];
//             }
//             C[i][j]=value;
//         }
//     }
//     for(int i=0;i<r1;i++){
//       for(int j=0;j<r2;j++){
//         cout<<C[i][j];
//       }cout<<endl;
//     }
// }
// #include <iostream>

// int main() {
//     int r1, c1;
//     std::cin >> r1 >> c1;
//     int A[r1][c1];
    
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             std::cin >> A[i][j];
//         }
//     }

//     int r2, c2;
//     std::cin >> r2 >> c2;
//     int B[r2][c2];
    
//     for (int i = 0; i < r2; i++) {
//         for (int j = 0; j < c2; j++) {
//             std::cin >> B[i][j];
//         }
//     }

//     if (c1 != r2) {
//         std::cout << "Matrix multiplication is not possible." << std::endl;
//     } else {
//         int C[r1][c2];
//         for (int i = 0; i < r1; i++) {
//             for (int j = 0; j < c2; j++) {
//                 int value = 0;
//                 for (int k = 0; k < r2; k++) {
//                     value += A[i][k] * B[k][j];
//                 }
//                 C[i][j] = value;
//             }
//         }

//         for (int i = 0; i < r1; i++) {
//             for (int j = 0; j < c2; j++) {
//                 std::cout << C[i][j] << " ";
//             }
//             std::cout << std::endl;
//         }
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int array[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>array[i][j];
//         }
//     }
//     int transpose[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             transpose[i][j]=array[j][i];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//       cout<<transpose[i][j];     
//     }
//     cout<<endl;}

// return 0;
// }
// vector <vector <int>>pascaltriangle(int n){
//     vector<vector<int>> pascal(n);
//     for(int i=0;i<n;i++){
//         int ith_vector=pascal[i];
//         ith_vector.resize(i+1);
    
//     for(int j=0;j<i+1;j++){
//         if(j==1||j==0){
//             pascal[i][j]=1;
//         }
//         else{
//        pascal[i][j]=pascal[i-j][j]+pascal[i-1][j-1];}
//     }}
//     return pascal;

// }
// int main(){
//     int n;
//     cin>>n;
//    vector<vector<int>>ans;
//    ans=pascaltriangle(n);
//    for(int i=0;i<ans.size();i++){
//     for(int j=0;j<ans.size();j++){
// cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
//    }
//    return 0;
// }
// #include <iostream>
// #include <vector>

// std::vector<std::vector<int>> pascalTriangle(int n) {
//     std::vector<std::vector<int>> pascal(n);

//     for (int i = 0; i < n; i++) {
//         pascal[i].resize(i + 1);
//         for (int j = 0; j <= i; j++) {
//             if (j == 0 || j == i) {
//                 pascal[i][j] = 1;
//             } else {
//                 pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
//             }
//         }
//     }
//     return pascal;
// }

// int main() {
//     int n;
//     std::cin >> n;
//     std::vector<std::vector<int>> ans = pascalTriangle(n);

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             std::cout << ans[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }

//     return 0;
// }
