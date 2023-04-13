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
int saveAllPosUsingArray(int a[],int n,int x,int i, int out[],int j){
   if(i==n){
    return 0;
   }
   if(a[i]==x){
    out[j] = i;
    return 1 + saveAllPosUsingArray(a,n,x,i+1,out, j+1);
   }
   return 0 + saveAllPosUsingArray(a,n,x,i+1,out,j);
}