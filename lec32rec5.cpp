#include<iostream>
using namespace std;
// int gcd(int a, int b){
//     if(b>a) return gcd(b,a);
//     if( b==0) return a;//base case
//     return gcd(b,a % b);

// }
// int main(){
//     int x=gcd(40,48);
//     cout<<x<<"\n";
//     return 0;
// } angstrong number base case -->assumption -->self work
// int pow(int p, int q){
//     if(q==0) return 1;
//     if (q%2==0){
//     int resulti=pow(p,q/2);
//     return resulti * resulti;
// }
// else {
//     int result2=pow(p, (q-1)/2);
//     return p*result2*result2;
// }}
// int f(int n,int d) {
// if(n==0) return 0;
// return pow(n%10,d) + f(n/10 , d);
// }
// int main(){
//     int n;
//     cin>>n;
//     int no_of_digits=0;
//     int temp=n;
//     while (temp>0){
//         temp=temp/10;
//       no_of_digits++;
//     }
//     int result=f(n,no_of_digits);
//     if(result==n){
//         cout<<" yes";
//     }
//     else {
//         cout<<" no";
//     }
//     return 0;
// }
//frog jump problem 
int f(int *h, int n ,int i){
    if(i==n-1) return 0;
     if(i==n-2) return
      f(h,n,i+1) + abs((h[i])-(h[i+1]));
      return min(f(h,n,i+1) + abs((h[i])-(h[i+1])),f(h,n,i+2) + abs((h[i])-(h[i+2]))
      );

}
int main(){
    int arr[]={10,10,20,10};
    int n=4;
    cout<<f(arr,n,0);
}