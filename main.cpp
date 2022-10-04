#include <iostream>
#include <stdio.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    char c;
    int count=0; 
    printf("아무말이나 해보세요:");
    while ( (c = getchar() ) != '\n') // 입력 문자가 개행문자가 나올 때까지 반복.  
    {
	    if(c>='0'&&c<='9')       //입력된 글자가 숫자인가?  
	        count=count+1;    // 그렇다면 하나를 센다.  
	}
	
    printf("숫자의 개수는 %i개",count);
     
    return 0;
}


