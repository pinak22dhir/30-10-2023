#include<iostream>
#include<algorithm>
#include<vector>
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
// int largest(int arr[],int size){
//     int max=0;
//     int max_index=-1;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//         max=arr[i];
//         max_index=i;
//         }
//     }
//     cout<<max_index<<" "<<max<<" ";
//     return max_index;
// }
 
    //  int largest(int arr[],int size){
    // int max=0;
    // int max_index=-1;
    // for(int i=0;i<size;i++){
    //     if(arr[i]>max){
    //     max=arr[i];
    //     max_index=i;
    //     }
    // }
//     cout<<max_index<<" "<<max<<" ";
//     return max_index;
// }
//
// int secondlargestelement(int arr[], int size){
//     int max=INT_MIN;
//     int second_max=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     for(int i=0;i<size;i++){
//         if(arr[i]>second_max && arr[i]!=max){
//             second_max=arr[i];
//         }
//         return second_max;
// }
// int main(){
//     int arr[]={1,2,3,5,5};
//     int n=5;
//   int larger= largest(arr,5);
//   cout<<arr[larger]<<endl;
//   arr[larger]=-1;
//   int second_larger= largest(arr,5);
//   cout<<larger<<endl;
// int largestelement=array[larger]{
//     if(arr[i]==largestelement){
//         arr[i]=-1;
//     }
// }
// int indexofsecondlargest=largestelement(array,n);
// cout<<arr[indexofsecondlargest]<<endl;
// return 0;
// }
   
// int main(){
//     int array[]={1,2,3,4,5};
//     int n=5;
//     int k=2;
//     k=k%n;
//     int ansarr[5];
//     int j=0;
//     //inserting last k elements in ans array
//     for(int i=n-k;i<n;i++)
// { ansarr[j++]=array[i];

// }
// //inserting first n-k elements
// for(int i=n-k;i<n;i++)
// { ansarr[j++]=array[i];}
// //printing the
// for(int i=0;i<n;i++)
// { cout<<ansarr[i]<<" ";}
// cout<<endl;
// return 0;}
// int main(){
//     // std::vector<int> v={1,2,3,4,5};
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//  v.push_back(4);
//   v.push_back(5);

//     int k=2;
//     k=k%v.size();
//     reverse(v.begin(),v.end());
//     reverse(v.begin(),v.begin()+k);
//     reverse(v.begin()+k,v.end());
//     for(int a: v){
//       std:: cout<<a<<" ";
//     }
//     std::cout<<endl;


// }
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    const int N =1e5 + 10;
    vector<int> freq(N,0);
    for(int i=0;i<n;i++)
{
    freq [v[i]]++;
}
cout<<"enter queries";
int q;
cin>>q;
while(q--){
    int queryelement;
cin>>queryelement;
cout<<freq[queryelement]<<endl;
}
return 0;
}