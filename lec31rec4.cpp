#include<iostream>
#include<vector>
using namespace std;
// void f(int n){
//     if(n<1)
//     return ;
//     f(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     f(20);
//     return 0;
// }
// void f(int n, int k){
//   //base case
//     if(k==0)
//     return ;
//     //assumption
//     f(n,k-1);
//     //selfwork
//     cout<<(n*k)<<" ";
// }
// int main(){
//     f(5,3);
//     return 0;
// }
// void f(int n, int k){
//   //base case
//     if(k==0)
//     return ;
//     //assumption
//     f(n,k-1);
//     //selfwork
//     cout<<(n*k)<<" ";
// }
// int main(){
//     f(5,3);
//     return 0;
// }
// int f(int n) {
//     // Base case
//     if (n == 0)
//         return 0;
//     // Assumption
//     return f(n - 1) + ((n % 2 == 0 ? (-n) : (n)));
//     // Self-work
// }

// int main(){
//    cout<< f(5)<<endl;
//     return 0;
// }
//to check in x to i-1
// bool f(int *arr ,int n,int i,int x){
//     //base case
//     if(i==n){
//         //array is exhausted
//         return false;
//     }
//     return arr[i]==x||f(arr,n,i+1,x);
// }
// int main(){
//     int arr[]={1,2,3,9};
//     int n=4;
//     int x=3;
//     bool result=f(arr,n,0,x);
//     if(result) cout<<" yes";
//     else cout<<"no";
//     return 0;

// }