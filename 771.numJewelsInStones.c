/*************************************************************************
    > File Name: numJewelsInStones.c
    > Created Time: 一  4/16 11:21:10 2018
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int numJewelsInStones(char* J, char* S) {
    int num = 0;
    for (int i = 0; i < strlen(J); i ++) {
        for(int o = 0; o < strlen(S); o++) {
            if (J[i] == S[o]) {
                num ++;
            }
        }
    }
    printf("%d",num);
    return num;
}

int main(int argc, const char * argv[]) {
    numJewelsInStones("aA", "aAAbbbb");
    return 0;
}

