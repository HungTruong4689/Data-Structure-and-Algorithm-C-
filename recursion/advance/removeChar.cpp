#include<iostream>
using namespace std;

int length(char input[]){
    if(input[0]=='\0'){
        return 0;
    }
    return 1 + length(input+1);;
}

void removeA(char input[]){
   if(input[0]=='\0'){
    return ;
   }
   if(input[0]!= 'a'){
    removeA(input + 1);
   }else{
      for(int i=0;input[i]!='\0';i++){
        input[i] = input[i+1];
      }
      removeA(input);
   }
}