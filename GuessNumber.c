#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
  FILE *fp;
  char a;
  int k=0,number,answer;/*����ǰʱ�����ó�������������ӣ�����ÿ�β�����������һ��*/

  if ((fp=fopen("README1.txt","r+"))==NULL){
     printf("Cannot open file!\n");exit(0);}
  while((a=fgetc(fp))!=EOF)
     putchar(a);
  srand( (unsigned)time( NULL ) );
     number=rand()%100;
    printf("�²¿����ĸ�����\n");
   do{
        scanf("%d",&answer);
        fprintf(fp,"%d\n",answer);
       if(answer>number){ 
            printf("�´���,����һ��\n");
            fprintf(fp,"�´���,����һ��\n");} 
        if(answer<number){ 
            printf("��С�ˣ�����һ��\n");
            fprintf(fp,"��С��,����һ��\n");} 
            k++;
    }while(answer!=number);
    printf("�����ֻ����%d�ξͲ³��˴𰸣����������!\n",k);
    fprintf(fp,"�����ֻ����%d�ξͲ³��˴𰸣����������!\n",k);
fclose(fp);
}
