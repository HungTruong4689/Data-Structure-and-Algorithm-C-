#include<iostream>
using namespace std;

int lastIndex(int a[],int n,int x,int i){
    if(i==-1){
        return -3;
    }

    if(a[i]==x){
        return i;
    }

    return lastIndex(a,n,x,i-1);
}