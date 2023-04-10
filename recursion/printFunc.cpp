#include<bits/stdc++.h>
using namespace std;

void print(int n){
   /// Base case
   if(n==0){
      return;    /// mandatory
   }

   /// Recursive case
   print(n-1);     ///  1 2 3 4 ......n-1

   cout<<n<<endl;
    return;    /// optional
}
