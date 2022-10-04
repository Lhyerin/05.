#include <iostream>
#include <stdio.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int x,y; //두 개의 입력 정수 
    char op; //연산자 문자 
    int result;
    printf("enter the calculation:");
    scanf("%d %c %d",&x,&op,&y);
    
    switch(op){
        case '+':
		    result=x+y;
		    break;
        case '-':
        	result=x-y;
        	break;
        case '/':
        	result=x/y;
        	break;
        case '*':
		    result=x*y;
			break;	
	} 
    
    //연산자에 따라 결과갑을 계산 
    
    printf("=%i\n",result);
    
	return 0; 
}


