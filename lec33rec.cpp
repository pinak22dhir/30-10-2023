//#include<iostream>
//#include<vector>
//using namespace std;


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
// void f(int *arr,int n,int i,int sum,vector<int> &result){
//     if(i==n){
// result.push_back(sum);
// return ;
//     }
//     f(arr,n,i+1,sum+arr[i],result );
     
//      f(arr,n,i+1,sum,result );
// }
// int main(){
//     int arr[]={5,7};
//     int n=2;
//     //subset sum calculate
//     vector <int> result;
//     f(arr,n,0,0,result);
//     for(int i=0;i<result.size();i++){
// cout<<result[i]<<endl;
//     }
//     return 0;
// } subset sum
// int f(int i,int j,int m,int n){
//     if(i==m-1 && i==n-1) return 1;
//    if(i>=m ||j>=n ) return 0;
//    return f(i,j+1,m,n)+f(i+1,j,m,n);
// }
// int main(){
//     cout<<f(0,0,3,3)<<endl;
// }