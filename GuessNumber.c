#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main(){
  FILE *fp;
  char a;
  int i,number,answer,k=0;/*����ǰʱ�����ó�������������ӣ�����ÿ�β�����������һ��*/

  if ((fp=fopen("README0.txt","r"))==NULL){
     printf("Cannot open file!\n");exit(0);}
  while((a=fgetc(fp))!=EOF)
     putchar(a);
  srand( (unsigned)time( NULL ) );
     number=rand()%100;
    printf("�²¿����ĸ�����\n");
    do{
        scanf("%d",&answer);
        if(answer>number)
            printf("�´���,����һ��\n");
        if(answer<number)
            printf("��С�ˣ�����һ��\n");
            k++;
    }while(answer!=number);
    printf("�����ֻ����%d�ξͲ³��˴𰸣����������!\n",k);

fclose(fp);
}
