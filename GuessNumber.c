#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main(){
  FILE *fp;
  char a;
  int i,number,answer,k=0;/*将当前时间设置成随机函数的种子，所以每次产生的数都不一样*/

  if ((fp=fopen("README0.txt","r"))==NULL){
     printf("Cannot open file!\n");exit(0);}
  while((a=fgetc(fp))!=EOF)
     putchar(a);
  srand( (unsigned)time( NULL ) );
     number=rand()%100;
    printf("猜猜看是哪个数字\n");
    do{
        scanf("%d",&answer);
        if(answer>number)
            printf("猜大了,再来一次\n");
        if(answer<number)
            printf("猜小了，再来一次\n");
            k++;
    }while(answer!=number);
    printf("这次你只用了%d次就猜出了答案，你运气真好!\n",k);

fclose(fp);
}
