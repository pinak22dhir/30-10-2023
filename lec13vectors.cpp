#include<iostream>
#include<vector>
using namespace std;
//not important in capacity depends on compiler
int main(){
    // vector<int> v;
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    // v.push_back(1);
    //  cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    // v.push_back(2);
    //  cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    //  v.push_back(4);
    //  cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    //  v.push_back(5);
    //  cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    // // v.resize(5);
    // // cout<<"size: "<<v.size()<<endl;
    // // cout<<"capacity"<<v.capacity()<<endl;
    //  v.resize(6);
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    // v.resize(10);
    // cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<endl;
    // v.pop_back();
    //  v.pop_back();
    //  cout<<"size: "<<v.size()<<endl;
    // cout<<"capacity"<<v.capacity()<<en
//     vector <int> v;
//     //for loop
 
// for(int i=0;i<5;i++){
//         int element;
//         cin>>element;
//         v.push_back(element);
//     }
// for(int i=0;i<v.size();i++){
        
//         cout<<v[i];
       
//     }
//     cout<<endl;
//     //foreach loop 
//     v.insert(v.begin()+2,6);
//     v.erase(v.end()-2);
//     int idx=0;
//     while(idx<v.size()){
//         cout<<v[idx++]<<" ";

//     }
vector <int> v(6);
// int n=v.size();
// cin>>n;
// for(int i=0;i<6;i++)
// {
//     cin>>v[i];
// }
// cout<<"enter x";
// int x;
// cin>>x;
// int occurence=0;
// for(int i=0;i<v.size();i++){
//     for(int i=v.size()-1;i>=0;i--){
// if(v[i]==x){
// // occurence=i;
// occurence++;
// // break;
// }
// for(int ele: v){
//     if(ele==x){
//         occurence++;
//     }
// }

// }
// cout<<occurence<<endl;
// int arr[]={1,2,3,4,5,6};
// bool sortedflag=true;
// for(int i=1;i<=6;i++){
//     if(arr[i]<=arr[i-1]){
// sortedflag=false;
//     }
// }
// cout<<sortedflag<<endl;
int arr[]={1,6,8,9,0};
int ans=0;

for(int i=0;i<5;i++){
    if(i%2==0){
ans+=arr[i];}
else {
ans-=arr[i];}

}

cout<<ans<<" ";

    return 0;
}