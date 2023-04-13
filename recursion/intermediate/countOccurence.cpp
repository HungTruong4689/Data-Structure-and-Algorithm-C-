#include<iostream>
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
void count(int a[],int n,int x,int i, int &ans){
    if(i==n){
      return;
   }
   if(a[i]==x){
    ans++;
   }
   count(a,n,x,i+1,ans);
}