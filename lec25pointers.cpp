#include<iostream>
using namespace std;
//array acts as a pointer
// void swap(int *x,int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int x=10;
//     int y=12;
// int *p1=&x;
// int *p2=&y;
// swap(p1,p2);
// cout<<x<<" " <<y;
// }
// int main(){
//     double dec=4.98;
//    double *ptrd=&dec;
//    cout<<"size of dec is"<<sizeof(dec)<<" ";
//     cout<<ptrd<<" " << (ptrd +1)<<" ";
//     cout<<ptrd<<" " << (ptrd +2)<<" ";


// }
// int main(){
//     int arr[]={1,2};
//     int *ptr= &arr[0];
//     cout<<ptr<<" "<<*ptr<<endl;
// cout<<*ptr++;
// cout<<arr[0]<<" "<<arr[1]<<"\n";
// cout<<ptr<<" "<<*ptr<<"\n";
// int arr[]={2,4};
// int *ptr= &arr[0];
// cout<<(*ptr)++<<"\n";//yaha 2 phir add honge 3
// cout<<arr[0]<<" "<<arr[1];//3 and 4
// cout<<*(ptr++)<<"\n";//2
// cout<<arr[0]<<" "<<arr[1];//sae 2 4

// return 0;
// int arr[2]={1,7};
// int *ptr= &arr[0];
// cout<<*++ptr<<"\n";
// cout<<++*ptr<<"\n";

// }
// int arr[3]={ 1,2,3};
// int *ptr= &arr[0];
// cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;
// cout<<*(arr + 2)<<"\n";
// return 0;}
void process(int *arr, int n){
    for(int i=0;i<n;i++){
cout<<*(arr+i)<<" ";
    }
}
int main(){
    int arr[3]={1,2,3};
    process(arr,3);
    return 0;
}