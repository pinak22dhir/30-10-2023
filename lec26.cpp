//wild pointer is the pointer in whiv it declares but did not answeany value segmentation fault 
//null pointer int * ptr =null; 
//int * ptr;
//dangling pointers  overwrite kr skte hai 
//void pointer 
#include<iostream>
using namespace std;
// int main(){
//     int *ptr;//only declared 
//     cout<<ptr<<" "<<*ptr;
//     return 0;
// }
// int main(){
//     int *ptr=NULL;
//     int *p1=0;
//        int *p2='\0';
//     cout<<ptr<<" "<<p1<<p2<<"\n";
//     return 0;
// }
// int main(){
//     int *ptr=Null;{
//         int x=10;ptr &x;

//     }
//     cout<<ptr;
// }
//void pointer 
int main(){
    float f=10.2;
    int x=10;
    void *ptr= &f;
    ptr = &x;
    // cout<<*ptr;
    int *integerpointer= (int *)ptr;
    cout<<*integerpointer<<"\n";
    return 0;
}