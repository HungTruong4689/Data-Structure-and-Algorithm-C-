#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[],int n,int key){

         int s = 0, e = n-1;
         while(s<=e){
            int mid = s + (e-s)/2;

            if(a[mid] == key){
                return mid;
            }else if(a[mid] > key){
                e = mid-1;
            }else{
                s = mid + 1;
            }
         }

         return -1;

}