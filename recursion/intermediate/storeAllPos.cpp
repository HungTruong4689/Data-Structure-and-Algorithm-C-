#include<iostream>
#include<vector>
using namespace std;

void printAllPos(int a[],int n,int x,int i){
   if(i==n){
    return;
   }
   if(a[i]==x){
    cout<<i<<" ";
   }
   printAllPos(a,n,x,i+1);
}

void saveAllPos(int a[],int n,int x,int i, vector<int> &ans){
   if(i==n){
    return;
   }
   if(a[i]==x){
    ans.push_back(i);
   }
   saveAllPos(a,n,x,i+1,ans);
}
