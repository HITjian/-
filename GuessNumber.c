#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h> 
main(){
  FILE *fp;
  char a;
  int k=0,t=0,n,number,answer,maxnumber,mychoose1,mychoose2,standard;/*����ǰʱ�����ó�������������ӣ�����ÿ�β�����������һ��*/
  if ((fp=fopen("README2.txt","r+"))==NULL){
     printf("Cannot open file!\n");exit(0);}
  while((a=fgetc(fp))!=EOF)
     putchar(a);

    aa: printf("\n             �˵�  \n1.��ʼ   2.�˳�  \n");
     scanf("%d",&mychoose1);
     switch(mychoose1){
 case 1:  printf("    ��ѡ�����׳̶�\n1.��  2.��ͨ   3.����   4.�Զ���\n");
     scanf("%d",&standard);
 switch(standard){
 	case 1:n=pow(10,2);break;
 	case 2:n=pow(10,3);break;
 	case 3:n=pow(10,4);break;
 	case 4:printf("���������������Ƕ��٣�\n0~%d");
 	       scanf("%d ",&maxnumber);
			while(maxnumber>0){
				maxnumber/=10;
				t++;
			} n=pow(10,t);break;
 }   
     srand( (unsigned)time( NULL ) );
     number=rand()%n;
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
     printf("1.����һ��  2.�˳�");
     scanf("%d",&mychoose2);
     switch(mychoose2){
  	case 1:goto aa;break;
  	case 2:fclose(fp);break;
	 }break;
case 2:fclose(fp);break;}
}
