// given an integer array a return the prefix sum/ in same array without creating a new array
#include<iostream>
#include <vector>
using namespace std;
// 5 4 1 2 3
// 5 9 1 2 3
// 5 9 10 2 3 
// 5 9 10 12 3
// void runningsum(vector<int> &v){
// for(int i=1;i<v.size();i++){
//     // v[i]=v[i-1]+v[i];
//     v[i]+=v[i-1];}
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
// int ele;
// cin>>ele;
// v.push_back(ele);
//     }
//     runningsum(v);
//      for(int i=0;i<n;i++){
// cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// bool checkprefixsum(vector<int> &v){
//     int total_sum=0;
//     for(int i=0;i<v.size();i++){
//         total_sum+=v[i];
//     }
//     int prefix_su=0;
//     for(int i=0;i<v.size();i++){
//         prefix_su+=v[i];
//         int suffix_sum=total_sum-prefix_su;
//         if(suffix_sum==prefix_su){
//             return true;
//         }
//     }
//     return false;
// }
//  int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
// int ele;
// cin>>ele;
// v.push_back(ele);
//     }
//     cout<<checkprefixsum(v)<<endl;
// return 0;
// }
//given  an array of integers answer q queries u need to print su of values in a given range of indices from l to r
//l=1 r==3
//0 1 2 3 4 5

//index =0 1 2 3
//vector 0 x1 x2 x3
// /o baised --> 0 to n-1
// 1 baise 1--> n
// 0 5 1 2 3 4
//0 5 6 8 11 15  prefix sum array 
//l==1  r==3
//ans = v[r]-v[l-1]=v[3]-v[0]==8
//l==3 r==5

int main(){
    int n;
    cin>>n;
    vector<int> v(n+1, 0);
    for(int i=1;i<n;i++){
        cin>>v[i];
    }
    //calculate prefix sumarray 
    for(int i=1;i<=n;i++){
    v[i]+=v[i-1];
    } 
    int q;
    cin>>q;

    while(q--){
int l,r;
cin>>l>>r;
int ans=0;
//ans =prefix sumarr[r]- prefix su[l-1]
ans=v[r]-v[l-1];
cout<<ans;

    }

    return 0;
}
