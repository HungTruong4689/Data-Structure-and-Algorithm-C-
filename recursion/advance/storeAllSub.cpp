#include<iostream>
#include<vector>
using namespace std;

void print_subs(string input, string output, vector<string> &v){
    if(input.length() == 0){
        v.push_back(output);
        return;
    }
    print_subs(input.substr(1), output + input[0],v);  /// include
    print_subs(input.substr(1), output,v);   /// exclude
}