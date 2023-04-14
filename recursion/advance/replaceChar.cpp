#include<iostream>
using namespace std;

int length(char input[]){
    if(input[0]=='\0'){
        return 0;
    }
    return 1 + length(input+1);;
}

void replaceChar(char input[]){
    if(input[0]=='\0'){
        return;
    }
    if(input[0]=='a'){
        input[0] = 'x';
    }
    replaceChar(input + 1);

}