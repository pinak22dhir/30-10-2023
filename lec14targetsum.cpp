#include<iostream>

using namespace std;

//     int arr[]={1,4,7,9,0,1,5,3};
//     int targetsum=5;
//     int totalpairs=0;
//     for(int i=1;i<7;i++){
//         for(int j=i+1;j<7;j++){
// if(arr[i]+arr[j]==targetsum){
//     totalpairs++;
// }
//         }
        
//     }
//     cout<<totalpairs<<endl;
// int arr[]={1,1,3,5,5};


// for(int i=0;i<5;i++){
//     for(int j=i+1;j<5;j++){
//         if(arr[i]==arr[j]){
//             arr[i]=arr[j]=-1;
//         }
//     }
// }

// int unique=0;
// int idx=0;
//     for(int i=0;i<5;i++){
//         if(arr[i]>0){
//             unique=arr[i];
// idx=i;
//         }
//     }
//     cout<<unique<<" "<<idx;
// int arr[]={5,8,9,0,3};
// vector<int> v(5);
// for (int i=0;i<v.size();i++){
//     cin>>v[i];
// }
// for (int i=0;i<v.size();i++){
//     cout<<v[i];
// }
// cout<<"enter x";
// int x;
// cin>>x;
// bool present=false;
// for(int i=0;i<v.size();i++){
//    if(x==v[i]){
//   present=true;
//     break;
    
//    } 
   
// }
// if (present)
// {
//     cout<<"element is present";
// }
// else {
//     cout<<"not present";
// }
// int n;
// cin>>(n);
// vector<int> v(n);
// for (int i=0;i<v.size();i++){
//     cin>>v[i];
// }
// const int N =1e5+ 10;
// vector <int> freq(N,0);
// for(int i=0;i<n;i++){
//     freq[v[i]]++;
// }


 
// for (int i=0;i<v.size();i++){
//     cout<<v[i];
// }
// cout<<"enter queries";
// int q;
// cin>>q;
// while(q--){
//     int queryelement;
//     cin>>queryelement;
//     cout<<freq[queryelement]<<endl;
// }(
int largest(int arr[],int size){
    int max=0;
    int max_index=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
        max=arr[i];
        max_index=i;
        }
    }
    cout<<max_index<<" "<<max<<" ";
    return max_index;
}
int main(){
    int arr[]={1,2,3,5,5};
  int larger= largest(arr,5);
  cout<<larger<<endl;
  arr[larger]=-1;
  int second_larger= largest(arr,5);
  cout<<larger<<endl;
return 0;
}
   
