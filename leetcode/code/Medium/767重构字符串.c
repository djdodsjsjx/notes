#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * reorganizeString(char * s){
    int p[26];
    int length = strlen(s);
    for(int i = 0; i < length; i++){
        p[s[i] - 'a']++;
    }
    int max = 0, index = 0;
    for(int i = 0; i < 26; i++){
        if(max < p[i]){
            max = p[i];
            index = i;
        }
    }
    printf("%d\n",max);
    if(max > (length+1)/2) return "";
    for(int i = 0; i < max; i++){
        s[i*2] = index + 'a'; 
    }
    // int count = 0, count2 = 0;
    // for(int i = 0; i < 26; i++){
    //     if(i == index) i++;
    //     while(p[i]){
    //         if(max + count >= (length+1)/2){
    //             s[count2*2+1] = i + 'a';
    //             count2++;
    //         }else{
    //             s[2*(max+count)] = i + 'a';
    //             count++;
    //         }
    //         p[i]--;
    //     }
    // }
    return s;
}

int main(){
    char s[] = "aab";
    reorganizeString(s);
    return 0;
}