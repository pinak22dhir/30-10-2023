#include<iostream>;
using namespace std;
// / int sum(int n){
//     if(n>=0 && n<=9){ return n;}
   
//     int ld=n%10;//last digit 

//     return ld +sum(n/10);
// }
// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     int result=sum(n);
//     cout<<result;
// }
// int power(int n, int m){
// if (m==0) {return 1;}

// return n*power(n,m-1); //recursive call  m times m /2 

// }
int power(int n, int m){
if (m==0) {return 1;}
if(m %2==0){
return power(n,m/2)* power(n,m/2);}
else {
  return n* power(n,m/2)* power(n,m/2);  
}
 //recursive call  m times m /2 
// we will use time space coplexity(log amnd q-1) finding specific ans
}
 int main(){
    int n,m;
    cout<<"enter n ";
  cin>>n;
      cout<<"enter m";
    cin>>m;
   
   
    int result=power(n,m);
    cout<<result;
}