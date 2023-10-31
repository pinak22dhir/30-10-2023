#include<iostream>
using namespace std;
// string f( string &str, int idx, int n){
//      if(idx==n-1 ) return " ";
//      string curr=" ";
//      curr+=str[idx];
//      return ((str[idx] == 'a'? " ": curr )+ f(str,idx+1,n));;
// }
// int main(){

//   string str="abcd";
//   int n=5;
//   cout<<f(str,0,5);
//   return 0;
// }
bool f(int num, int *temp){
  if(num>=0 && num<=9)
  {
    int last_digit=((*temp)%10);
    (*temp)/=10;
    return num==last_digit;

  }
  bool result=(f(num/10,temp)&&(num % 10)==(*temp %10 ));
  (*temp)
 /=10;
 return result;} 
 int main(){
  int num=1241;
  int anothernum=num;
  int *temp= &anothernum;
  cout<<f(num,temp)<<endl;
  return 0;
 }