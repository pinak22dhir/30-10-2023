#include<iostream>
#include<cmath>
using namespace std;
// void f(int *arr,int idx,int n){
//     if (idx==n) return;
//     // cout<<arr[idx]<<"\n";
//     f(arr,idx+1,n);
//      cout<<arr[idx]<<"\n";
// }
// int main(){
//     int n=5;
//     int arr[]={2,7,9,0,6};
//     f(arr,0,n);
//     return 0;
// }
//iterative loop se simple 
// int f(int *arr,int idx, int n){
// if(idx==n-1) return arr[idx];
// return max(arr[idx],f(arr, idx+1, n) );
// }
// int main(){
//     int arr[]={1,3,7,7,0,6,3};
// int result=f(arr, 0, 7);
// cout<<result;

// }
int sumi(int *arr,int idx, int n){
if(idx==n-1) return arr[idx];
//mukje nhi pta in sb ka sum kaise layenge but initial and new ko plus ke denge
//base to assumption to self eork ek ek kr ke call krega  
return arr[idx] + sumi(arr, idx+1, n) ;
}
int main(){

  int p;
  cin>>p;
  int arr[p];
  for(int i=0;i<p;i++){
    cin>>arr[i];
  }
  for(int i=0;i<p;i++){
    cout<<arr[i];
  }
int result=sumi(arr, 0,p);
cout<<result;

}