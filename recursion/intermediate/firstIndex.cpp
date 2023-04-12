#include<iostream>
using namespace std;

int firstIndex(int a[],int n,int x,int i){
    if(i==n){
        return -1;
    }
    if(a[i]==x){
        return i;
    }
    return firstIndex(a,n,x,i+1);
}