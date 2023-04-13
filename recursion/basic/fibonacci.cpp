#include<bits/stdc++.h>
using namespace std;

int fib(int n){
   /// Base case
   //when n =0
   if(n==0){
    return 0;
   }

    //base case n==1
   if(n==1){
    return 1;
   }

   /// Recursive case - setup two base value
   int smallOutput1 = fib(n-1);
   int smallOutput2 = fib(n-2);

   /// calculation -- finally
   return smallOutput1 + smallOutput2;

}

int main(){
    cout<<fib(3);
    return 0;
}
