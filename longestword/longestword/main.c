//
//  main.c
//  kadai1-61
//
//  Created by 向日葵会下雨 on H27/06/01.
//  Copyright (c) 平成27年 向日葵会下雨. All rights reserved.
//
#include  <stdio.h>
#include  <ctype.h>
#include <string.h>

int main (void);
void sortWord(char s[]);

void sortWord(char s[]){
    int i,j;
    char a;
    int b,d;
    for(i=0; s[i]!=0; i++){
        for(j=i+1; s[j]!=0; j++){
            b=(int)s[i];
            d=(int)s[j];
            if(b>d){
                a = s[j];
                s[j] = s[i];
                s[i] = a;
            }
        }
   
    }
}

int main(void)
{
    char s[16];
    char line[235886][30];
    int i,n;
 

    printf("16個の英文字を入力ください（スペースなしで）：");
    scanf("%s",s);
   
    sortWord(s);

    printf("アルファベット順に並び替えた文字列は%sです\n",s);
    
    FILE *fp;
    char *fname = "/usr/share/dict/words";
    
    fp = fopen(fname, "r");
    if( fp == NULL ){
        printf( "%sファイルが開けません\n", fname );
        return -1;
    }
   
    for(i=0; fgets(line[i],30,fp)!=NULL; i++);
    n=i;
    
    fclose( fp );
    
    for(i=0; i<n; i++){
        
        line[i][0]=tolower(line[i][0]);
       // printf("%s", line[i]);
    }
   // printf("%s", line[235885]);
    
}