#include <iostream>
#include <stdio.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int answer = 59;
    int trial=0;
    int x;
    
    do
    {
    printf("Guess a Number:");     //�Է��ض� ���� ���
	scanf("%d",&x);	 //�Է��� ����
	
	if(x>answer)
	    printf("HIGH\n");
	else if(x<answer)
	    printf("LOW\n");	 //�Է¼��ڰ� ���亸�� ū�� ������ ���	
    trial++;	
	}
	while(x!=answer);
	    ; //����� ������ ���� �Ǵ� 
    printf("Congratuation\n");
    printf("Number of trial =%i\n",trial);//�õ� Ƚ�� ��� 
    
    
    
	return 0; 
}


