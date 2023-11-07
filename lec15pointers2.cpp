#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void sortzeroesandones(vector <int> &v){
// int zero_count=0;
// for(int ele:v){
// if(ele==0){
//     zero_count++;
// }
// }
// for(int i=0;i<v.size();i++){
//     if(i<zero_count){
//         v[i]=0;
//     }
//     else 
//  {   v[i]=1;}
// }
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);

//     }

//     sortzeroesandones(v);

//  for(int i=0;i<n;i++){
//        cout<<v[i];

//     }
//     return 0;
// }
using namespace std;
// void sortzeroesandones(vector <int> &v){
// int left_ptr=0;
// int rigth_ptr=v.size()-1;
// while(left_ptr<rigth_ptr){
// if(v[left_ptr]==1 && v[rigth_ptr]==0){
//     v[left_ptr++]=0;
//    v[rigth_ptr--]=1;
// }
// if (v[left_ptr]==0){
// left_ptr++;
// }
// if (v[rigth_ptr]==1){
//     rigth_ptr--;
// }}
// return;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);

//     }

//     sortzeroesandones(v);

//  for(int i=0;i<n;i++){
//        cout<<v[i];

//     }
//     return 0;
// }
// void sortbyparity(vector <int> &v){
// int left_ptr=0;
// int rigth_ptr=v.size()-1;
// while(left_ptr<rigth_ptr){
// if(v[left_ptr]%2==1 && v[rigth_ptr]%2==0){
//    swap(v[left_ptr],v[rigth_ptr] );
//    left_ptr++;rigth_ptr--;
// }
// if (v[left_ptr]%2==0){
// left_ptr++;
// }
// if (v[rigth_ptr]%2==1){
//     rigth_ptr--;
// }}
// return;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);

//     }

//     sortbyparity(v);

//  for(int i=0;i<n;i++){
//        cout<<v[i];

//     }
//     return 0;
// }
void square(vector <int> &v){
    vector<int> ans;
int left_ptr=0;
int rigth_ptr=v.size()-1;
while(left_ptr<rigth_ptr){
if(abs(v[left_ptr])<abs(v[rigth_ptr])){
ans.push_back(v[rigth_ptr]*v[rigth_ptr]);
  rigth_ptr--;
}
else {
 ans.push_back(v[left_ptr]*v[left_ptr]);
  left_ptr++;
}}
reverse(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}


return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);

    }

    square(v);

 for(int i=0;i<n;i++){
       cout<<v[i];
    }
    cout<<endl;
    return 0;
}