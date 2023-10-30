#include<iostream>
#include<vector>

using namespace std;

void insertionsort(vector<int> &v){
    int n=v.size();
    for(int i=1;i<n;i++)
{
    int curr=v[i];
    int j=i-1;
    while(v[j]<curr && j>=0){
        v[j+1]=v[j];
        j--;
    }
    v[j+1]=curr;
}
return;}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
   
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
     insertionsort(v);
      for(int i=n-1;i>=0;i--)
    {
   
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
return 0;
}