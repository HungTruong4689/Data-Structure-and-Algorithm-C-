#include<iostream>
using namespace std;

void print_subs(string input, string output){
    if(input.length() == 0){
        cout<<output<<endl;
        return;
    }
    print_subs(input.substr(1), output + input[0]);  /// include
    print_subs(input.substr(1), output);   /// exclude
}