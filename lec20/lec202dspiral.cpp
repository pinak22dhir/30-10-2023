#include <iostream>
#include <vector>

using namespace std;

// void spiralOrder(vector<vector<int>> &v) {
//     int left = 0;
//     int right = v[0].size() - 1;
//     int top = 0;
//     int bottom = v.size() - 1;
//     int direction = 0;

//     while (left <= right && top <= bottom) {
//         if (direction == 0) {
//             for (int col = left; col <= right; col++) {
//                 cout << v[top][col] << " ";
//             }
           
//             top++;
//         } else if (direction == 1) {
//             for (int row = top; row <= bottom; row++) {
//                 cout << v[row][right] << " ";
//             }
          
//             right--;
//         } else if (direction == 2) {
//             for (int col = right; col >= left; col--) {
//                 cout << v[bottom][col] << " ";
//             }
          
//             bottom--;
//         } else if (direction == 3) {
//             for (int row = bottom; row >= top; row--) {
//                 cout << v[row][left] << " ";
//             }
           
//             left++;
//         }
//         direction = (direction + 1) % 4;
//     }
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> v(n, vector<int>(m));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> v[i][j];
//         }
//     }

//     spiralOrder(v);

//     return 0;
// }

// vector <vector<int>> spiral(int n){
//     vector<vector<int> > matrix(n,vector<int> n);
// int left=0;
// int rigth=n-1;
// int top=0;
// int bottom=n-1;
// int direction=0;
// while(left<=rigth&& top<=bottom){
//     if(direction==0){
//         for(int i=left;i<=rigth;i++){
//             matrix[top][i]=value++;
//         }
//         top++;
//     }
//     else if(direction==1){
//         for(int j=0;j<top;j++){

//         }
//     }
  
// {

//     }
// }
// }
// #include <iostream>
// #include <vector>

// using namespace std;

// vector<vector<int>> generateSpiralMatrix(int n) {
//     vector<vector<int>> matrix(n, vector<int>(n, 0));
//     int left = 0;
//     int right = n - 1;
//     int top = 0;
//     int bottom = n - 1;
//     int value = 1;

//     while (left <= right && top <= bottom) {
//         // Traverse from left to right at the top row
//         for (int i = left; i <= right; i++) {
//             matrix[top][i] = value++;
//         }
//         top++;

//         // Traverse from top to bottom at the right column
//         for (int i = top; i <= bottom; i++) {
//             matrix[i][right] = value++;
//         }
//         right--;

//         // Traverse from right to left at the bottom row
//         if (top <= bottom) {
//             for (int i = right; i >= left; i--) {
//                 matrix[bottom][i] = value++;
//             }
//             bottom--;
//         }

//         // Traverse from bottom to top at the left column
//         if (left <= right) {
//             for (int i = bottom; i >= top; i--) {
//                 matrix[i][left] = value++;
//             }
//             left++;
//         }
//     }

//     return matrix;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<vector<int>> result = generateSpiralMatrix(n);

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
