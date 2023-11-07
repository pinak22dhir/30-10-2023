#include<iostream>
using namespace std;
int main(){
//     int arr[]={1,2,3,4};
   
//     // cout<<sizeof(arr)/sizeof(arr[0])<<endl;
//     int size=sizeof(arr)/sizeof (arr[0]);
//      cout<<size<<endl;
//      //forloop
//      for(int idx=0;idx<size;idx++)
//      { cout<<arr[idx]<<" ";
//      }
//      //for each loop 
//      for(int ele: arr){
// cout<<ele<<" ";
//      }
     //while loop

    //  int index=0;
   
//  int index = 0;
//     while (index < size) {
//         cout << arr[index] << endl;
//         index++;
//     }
// char vowels[5];
// for(int i=0;i<5;i++){
//     cin>>vowels[i];}
// for(int i=0;i<5;i++){
//     cout<<vowels[i]<<" ";
// }
// for (char &element: vowels){
//     cin>>element;
// }
//  for(int i=0;i<5;i++){
//     cin>>vowels[i]>>" ";}
int array[]={2,5,7,8,9,1};
// int size=sizeof(array)/sizeof(array[0]);
// int sum=0;
// for(int i=0;i<size;i++){
//     sum+=array[i];
// }
// cout<<sum<<endl;
// int max=array[0];
// for(int i=1;i<5;i++){
//     if(array[i]>max){
//         max=array[i];
//     }
// } cout<<max<<endl;
 int arr[8]; // Define an array of size 8

    // Input values into the array
    for (int i = 0; i < 8; i++) {
       int arr[8]; // Define an array of size 8

    // Input values into the array
    for (int i = 0; i < 8; i++) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> arr[i];
    } cout << "Enter element " << i << ": ";
        std::cin >> arr[i];
    }
int key=0;
int ans=-1;
for(int i=0;i<9;i++){
if(arr[i]==key){
    ans=i;
}
}
   std::cout << ans << std::endl;
// cout<<ans<<endl;
return 0;
}