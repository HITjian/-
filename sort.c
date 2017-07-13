#include<stdio.h>
#include<time.h>
#include<windows.h> 
#include<stdlib.h>
void main()
{
	void choosesort();
	void maopaosort();
    int choose;
   	aa:printf("please choose the method:\n1.—°‘Ò≈≈–ÚÀ„∑®\n2.√∞≈›≈≈–ÚÀ„∑®\n");
  	scanf("%d",&choose); 
    switch(choose){
	case 1: 
	choosesort();
	system("cls");
	goto aa;	
    break;
	case 2:
	maopaosort();
	system("cls");
	goto aa;
	break;
	default:
	printf("please enter the correct number!!!");
	break;
	}
}
void choosesort(){
	int i,j,k,n=5,tem,min;
    long int a;
    printf("please enter a number:\n");
    scanf("%d",&n);
    int array[n];
    srand((unsigned) time (NULL)); 
    for(i=0;i<n;i++){
    array[i]=(rand()%100);
	}
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);	
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED|FOREGROUND_GREEN);
    printf("The original sort is:");
    for(i=0;i<n;i++)
        printf("%d ",array[i]);
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(array[min]>array[j])
                min=j;
        } 
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);	
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
        for(a=0;a<300000000;a++);
		printf("\nNext Step:\n");
        tem=array[i];
        array[i]=array[min];
        array[min]=tem;
         for(k=0;k<n;k++){
            if(k==i){
            HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);	
			SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
            printf(" %d ",array[k]);
            }
           else if(k==min){
            HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);	
			SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
            printf(" %d ",array[k]);
            }
            else{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);	
			SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
            printf(" %d ",array[k]);}
            }

    }
    putchar('\n');
    HANDLE handle1 = GetStdHandle(STD_OUTPUT_HANDLE);	
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED|FOREGROUND_GREEN);
    printf("The sorted is:");
    for(i=0;i<n;i++){
    printf(" %d ",array[i]);
    }
	putchar('\n');
	HANDLE handle2 = GetStdHandle(STD_OUTPUT_HANDLE);	
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
    system("pause");
    return 0;
	
}
void maopaosort(){
    int i,j,k,n,tem,min;
    long int a;
	printf("please enter a number:\n");
    scanf("%d",&n);
    int array[n];
    srand((unsigned) time (NULL)); 
    for(i=0;i<n;i++){
    array[i]=(rand()%100);}
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);	
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED|FOREGROUND_GREEN);
    printf("The original sort is:");
    	for(i=0;i<n;i++){
    		printf(" %d ",array[i]);
		}
    for(i=0;i<n;i++){
    	for(j=0;j<n-i;j++){
    		if(array[j]>array[j+1]){
    			tem=array[j];
    			array[j]=array[j+1];
    			array[j+1]=tem;
			}
		}
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);	
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
		for(a=0;a<300000000;a++);
		printf("\nNext step:\n\n");
		for(j=0;j<n;j++){
			if(j==n-i-1){
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);	
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
				printf(" %d ",array[j]);
		}else{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);	
			   	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
				printf(" %d ",array[j]);
			}	
		}
	
	    }	
	HANDLE handle1 = GetStdHandle(STD_OUTPUT_HANDLE);	
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED|FOREGROUND_GREEN);
	printf("\nThe sorted is:");
	for(i=0;i<n;i++){
    	printf(" %d ",array[i]);	
		}
    HANDLE handle2 = GetStdHandle(STD_OUTPUT_HANDLE);	
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
	putchar('\n');
	system("pause");
}
  
