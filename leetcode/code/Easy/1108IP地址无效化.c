#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * defangIPaddr(char * address){
    int length = strlen(address);
    int count = 0;
    char* p = (char* )malloc(sizeof(char)*(length+7));
    for(int i = 0; i < length; i++){
        if(address[i] == '.'){
            p[i + 2*count] = '[';
            p[i + 2*count + 1] = '.';
            p[i + 2*count + 2] = ']';
            count++;
        }else{
            p[i + 2*count] = address[i];
        }
    }
    p[length+6] = '\0';
    return p;
}

int main(){
    char s[] = {"100.1.1.1"};
    int length = strlen(s);
    char* a =(char* )malloc(sizeof(char)*(length+7));
    a = defangIPaddr(s);
    puts(a);
    return 0;
}