#include<iostream>
#include<string>
#include<vector>
using namespace std;
// void f(string &s, int i, string result,vector<string> &li){
//     if(i==s.length()){
//         li.push_back(result);
//         return;
//     }
//       f(s,i+1,result+s[i],li);//concatenate hojayega
//     f(s,i+1,result,li);//nhi hoga concatenate
// }
// int main(){
//     vector<string> res;
//     string s="abcde";
// f(s,0," ",res);//empty string 
// for(int i=0;i<res.size();i++){
//     cout<<res[i]<<" ";
// }
// return 0;
// }
// void f(string &s, int i, string result,vector<string> &li){
//     if(i==s.length()){
//         li.push_back(result);
//         return;
//     }
//       f(s,i+1,result+s[i],li);//concatenate hojayega
//     f(s,i+1,result,li);//nhi hoga concatenate
// }
// int main(){
//     vector<string> res;
//     string s="abcde";
// f(s,0," ",res);//empty string 
// for(int i=0;i<res.size();i++){
//     cout<<res[i]<<" ";
// }
// return 0;
// }
// void f(string &s, int i, string result,vector<string> &li, vector <string> &v){
//     if(i==s.length()){
//         li.push_back(result);
//         return;}
//         int digit = s[i]='0';
// if (digit <=1){
//     f(s,i+1,result,li,v);
//     return;
// }
// for(int j=0;j<v[digit].size();j++){
//     f(s,i+1,result + v[digit][j],li,v);
//     }
//     return;
// }
// int main(){
//     vector<string> v (5);
// v={" "," ", "abc","cde","eghi"};
// string s="abc";
// vector<string> li;
// f(s,0," ",li,v);
// for(int i=0;i<li.size();i++){
//     cout<<li[i]<<" ";
// }
// return 0;
// }


void f(const string &s, int i, string result, vector<string> &li, vector<string> &v) {
    if (i == s.length()) {
        li.push_back(result);
        return;
    }

    int digit = s[i] - '0';

    if (digit < 2) {
        f(s, i + 1, result, li, v);
        return;
    }

    for (int j = 0; j < v[digit].size(); j++) {
        f(s, i + 1, result + v[digit][j], li, v);
    }
}

int main() {
    vector<string> v(5);
    v = {" ", " ", "abc", "def", "ghi"};
    string s = "23"; // Changed the input to "23" for testing.
    vector<string> li;
    f(s, 0, "", li, v);

    for (int i = 0; i < li.size(); i++) {
        cout << li[i] << " ";
    }

    return 0;
}
