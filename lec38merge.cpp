#include<iostream>
#include<vector>
using namespace std;
//all zeroes to end of it while maintaining the relative order of non zeroes
//0 5 0 3 42
//5 3 42 0 0 we apply some sort 
// void swapzeroestoend(vector<int> &v){
// int n=v.size();
// for(int i=n-1;i>=0;i--){
//     int j=0;
//     bool flag=false;
//     while(j!=i){
//         if(v[j]==0 && v[j+1]!=0){
//             swap(v[j],v[j+1]);
//         }
//         j++;
//     }
//     if(!flag) break;
// }
// return;

// }
// int main(){

// int n;
// cin>>n;
// vector<int> v(n);
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }
// swapzeroestoend(v);
// for(int i=0;i<n;i++){
//    cout<<v[i]<<" ";
// }cout<<endl;

// }
///lexicographical order using selection sort 
void selectionsort(char fruit[][60],int n){
    for(int i=0;i<n-1;i++){
        //finding min index ;

        int min_index=i;
        for(int j=j+1;j<n;j++){
            if(strcmp(fruit[min_index],fruit[j])>0){
min_index=j;
            }
        }
        //place the min element at the begining 
        if(i!=min_index){
            swap(fruit[i],fruit(min_index));   
        }
    }
    return ;
}