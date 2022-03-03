#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* reverseLeftWords(char* s, int n){
    int length = strlen(s);
    char* p = (char* )malloc(sizeof(char)* (length+1));
    for(int i = 0; i< length; i++){
        if(i + n < length){
            p[i + n] = s[i]; 
        }else{
            p[i + n -length] = s[i];
        }
    }
    p[length] = '\0';
    return p;
}

int main(){
    char s[] = {"abcedfg"};
    char* a =(char* )malloc(sizeof(char)*8);
    a = reverseLeftWords(s,3);
    puts(a);
    return 0;
}