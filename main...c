#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num = 0; //���ڸ� ���� �Ŵϱ� ���ں��� �ϳ� ����  
	
	printf("���ڿ��� �Է��ϼ���.\n");
	 
	while ((c=getchar())!='\n')// �Է¹��ڰ� ���๮�ڰ� ���� ������ �ݺ�  ... ���͸� ������ ���� ����! ���Ͱ� ���๮�ڰ� �Ǵ°���  
	{
		if(c>='0' && c<='9')
			num=num+1;	//�Էµ� ���ڰ� �����ΰ�? ���̸� num�� �ϳ��� ����.  
	}
	
	printf("������ ������ %i �� �Դϴ�.\n",num);// num���
	 
	return 0;
}
