#include <iostream>
#include <stdio.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    char c;
    int count=0; 
    printf("�ƹ����̳� �غ�����:");
    while ( (c = getchar() ) != '\n') // �Է� ���ڰ� ���๮�ڰ� ���� ������ �ݺ�.  
    {
	    if(c>='0'&&c<='9')       //�Էµ� ���ڰ� �����ΰ�?  
	        count=count+1;    // �׷��ٸ� �ϳ��� ����.  
	}
	
    printf("������ ������ %i��",count);
     
    return 0;
}


