/* 計算機概論實務-基本練習作業-作業10*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/03/08 10:00*/  
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
  char S[5000];//定義一個陣列 
  char ouput; //輸出 
  printf("請輸入一個字串："); 
  while(scanf("%s",S)==1) //輸入字串 
      {
         printf("處理過的字串為：",ouput);
		 int a,N=strlen(S); //用內建抓看輸入的字元個數 
         for(a=0;a<N;a++)// 從前面開始輸出 
             if(S[a]>='a')  //大小寫轉換,陣列會依序比對 
               printf("%c",S[a]-'a'+'A'); //以a為例子,陣列-97+65(-32) 
             else 
               printf("%c",S[a]-'A'+'a'); //以a為例子,陣列-65+97(+32) 
      } 
	system("pause");//暫停視窗 
    return 0; //回傳值為0  
}

