/* �p������׹��-�򥻽m�ߧ@�~-�@�~10*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/03/08 10:00*/  
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
  char S[5000];//�w�q�@�Ӱ}�C 
  char ouput; //��X 
  printf("�п�J�@�Ӧr��G"); 
  while(scanf("%s",S)==1) //��J�r�� 
      {
         printf("�B�z�L���r�ꬰ�G",ouput);
		 int a,N=strlen(S); //�Τ��ا�ݿ�J���r���Ӽ� 
         for(a=0;a<N;a++)// �q�e���}�l��X 
             if(S[a]>='a')  //�j�p�g�ഫ,�}�C�|�̧Ǥ�� 
               printf("%c",S[a]-'a'+'A'); //�Ha���Ҥl,�}�C-97+65(-32) 
             else 
               printf("%c",S[a]-'A'+'a'); //�Ha���Ҥl,�}�C-65+97(+32) 
      } 
	system("pause");//�Ȱ����� 
    return 0; //�^�ǭȬ�0  
}

