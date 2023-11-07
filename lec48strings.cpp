#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;
// int main()
// {
   //  string s="survive";
// // cout<<s.substr(1,2)<<endl;
// string s1="coding";
// cout<<s<<" "<<s1<<endl;
// // reverse(s.begin(), s.end());
// cout<<s<<" "<<s1<<endl;
// string sp;
// // cin>>sp;
// getline(cin,sp);
// cout<<sp<<endl;
// string str="hello";
// reverse(str.begin(),str.end());
// string s1="helloo";
// string s2="world";
// cout<<str.substr(1,2);
// cout<<s1<<" "<<endl;egg
// s1+=s2;
// cout<<s1<<" "<<endl;
// cout<<s1+s2<<" "<<endl;
// char s3[20]="college";
// char s4[20]="wallah";
// strcat(s3,s4);
// string s5="abcd";
// char ch='e';
// s5.push_back(ch);
// cout<<s5<<endl;
// int num=890;
// string str=to_string(num);
// str +="1";
// cout<<str<<endl;
// string s4="abcde";
// cout<<s1.size()<<endl;
// char ch[89]="abcde";
// cout<<strlen(ch)<<endl;

//     return 0;
// }
// string  countsort(string str){
//     vector<int> freq(26,0);
//     //storing fequency 
//     for(int i=0;i<str.length();i++){
//         int index=str[i]-'a';
//         freq[index]++;
//     }
//     //create stored string
//     int j=0;
//     for(int i=0;i<26;i++){
//         while (freq[i]--){
// str[j++]=i+'a';

//         }
//     }
//     return str;
// }
// int main(){
//     string str;
//     cin>>str;
//  cout<<countsort(str)<<endl;   
//     return 0;
// }
// bool isanagram(string s1,string s2){
//     //create freq
//     vector<int> freq(26,0);
//     //if lengths are different  return false
//     if(s1.length()!=s2.length()){
// return false;
//     }
//     //store frequency of 
//     for(int i=0;i<s1.length();i++){
//         freq[s1[i]-'a']++;
//         freq[s2[i]-'a']--;
//     }
//     //checking if freq of ever character is 0
//     for(int i=0;i<26;i++){
//         if(freq[i]!=0){
//             //not anagram 
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     if(isanagram(s1,s2)){
//         cout<<"strings are anagrams";
//     }
//     else {
//         cout<<"strings are not anagram "<<endl;
//     }
// }
//isomorphic 
// if(s1.length()!=s2.length()){
// return false;
//     }
//     //store frequency of 
//     for(int i=0;i<s1.length();i++){
//         freq[s1[i]-'a']++;
//         freq[s2[i]-'a']--;
//     }
//     //checking if freq of ever character is 0
//     for(int i=0;i<26;i++){
//         if(freq[i]!=0){
//             //not anagram 
//             return false;
//         }
//     }
//     return true;
// }
string longcommonprefix(vector<string> &str){
    //sorting the arrays of a string 
    // sort(str.begin(),str.end());
string s1=str[0];//firsy string
int ans_length=s1.size();
 for(int i=0;i<str.size();i++){
    int j=0;
while (j<s1.size()&&j<str[i].size()&&s1[j]==str[i][j]){
j++;
ans_length=min(ans_length,j);//updating length of ans string 
}
    }
}

int main(){
    int n;
    cout<<"enter number of string";
    cin>>n;
    cout<<"enter number of strings";
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
}