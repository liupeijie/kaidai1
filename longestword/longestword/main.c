//
//  main.c
//  kadai1-61
//
//  Created by 向日葵会下雨 on H27/06/01.
//  Copyright (c) 平成27年 向日葵会下雨. All rights reserved.
//
/*
#include <stdio.h>

int main(void) {
    ファイルの読み込み
    FILE *fp;
    char *fname = "/usr/share/dict/words";
    char s[10];
    
    fp = fopen(fname, "r");
    if( fp == NULL ){
        printf( "%sファイルが開けません¥n", fname );
        return -1;
    }
    
    printf( "¥n-- fgetc() --¥n" );
    while( fgets(s, 10,fp ) != NULL ){
        
        printf( "%s", s );
    }
    
    fclose( fp );
    return 0;
    */
    /*　　英文字入力
     int i;
     char s[100];
     
     for(i=0;i<=15;i++){
     scanf("%s",&s[i]);
     printf("i=%d",i);
     printf("(%s)\n",&s[i]);
     }
    
   
    
}*/


#include  <stdio.h>
#include  <ctype.h>
#include <string.h>
# define _SPACE 0x20

int  StrCmpare(const char *s1, const char *s2);
int main (void);

/* 文字列を辞書的に比較 */
int StrCmpare(const char *s1, const char *s2)
{
    while (*s1 == *s2) {  /* 文字が等い間ループする */
        if (*s1 == '\0')                    /* 末尾まで等しければ */
            return (0);                     /* ０を返す */
        s1++;                               /* 文字列の途中なので */
        s2++;                               /* インクリメントする */
    }    /* 等しくないので文字の値の差を返す */
    return (*s1 - *s2);
}

int main(void)
{
    char s[16];
    char line[235886][30];
    int i, n,cnt;
   
    printf("16個の英文字を入力ください（スペースなしで）：");
    scanf("%s",s);
    //char array[7] = "abcdef";
    //char *ptr = "ghijkl";
    
    printf("一文字ずつ表示する：\n");
    for (cnt = 0; s[cnt] != '\0'; cnt++) {
        printf("%c\n",s[cnt]);
    }
    
    
   /* printf("charポインタを、一文字ずつ表示する\n");
    for (cnt = 0; *(ptr + cnt) != '\0'; cnt++) {
        printf("%c\n",*(ptr + cnt));
    }*/
    
    
    FILE *fp;
    char *fname = "/usr/share/dict/words";
    
    fp = fopen(fname, "r");
    if( fp == NULL ){
        printf( "%sファイルが開けません¥n", fname );
        return -1;
    }
   
    for(i=0; fgets(line[i],30,fp)!=NULL; i++);
    n=i;
    
    fclose( fp );
    
    for(i=0; i<n; i++){
        
        line[i][0]=tolower(line[i][0]);
       // printf("%s", line[i]);
    }
    
    /* if (fp) {
        while ((c = getc(fp)) != EOF)
        {
            if (c == '\n') cnt++;
        }
        fclose(fp);
    }printf("%d",cnt);
      printf( "¥n-- fgetc() --¥n" );
    while( fgets(s, 10,fp ) != NULL ){
        
        printf( "%s", s );
    }*/
    
  
   // return 0;

   /* char s1[ ] = "ABCDEF";
    char s2[ ] = "aBcDeF";*/
    
   // printf("'a' - 'A' = 0X%X\n",  'a' - 'A');    /* 'a'と'A'の差を１６進数で表示 */
    
   /* printf("s1[ ]:%s\n", s1);
    printf("s2[ ]:%s\n", s2);
    
    printf("%s\n", !StrCmpare(s1, s2)? "s1[ ] = s2[ ]":"s1[ ] <> s2[ ]"); */
}