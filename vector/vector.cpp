#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> *vp = new vector<int>(); /// dynamic
    vector<int> v;   /// static
        vector<int> v2(10,-2);   /// initialise
    vector<int> v3(100); 

    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<endl;
    }
     sort(v2.begin(),v2.end());

   return 0;
}
