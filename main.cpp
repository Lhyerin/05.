#include <iostream>
#include <stdio.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int sum=0; 
    int x;
    int i;
    
	printf("정수를  입력:");
    scanf("%d",&x);
    
    for (i=0;i<=x;i++)
        sum=sum+i; 
    
    printf("%i",sum);
     
}


