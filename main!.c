#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int x;
	int trial = 0;
	
	do
	{
	print("guess a number");
	scanf("%d", &x);
	trial ++;
	
		if (x>answer)
		printf("high\n");
		
		if (x<answer)
		print("low\n");
		
		
	 
	}
	
	while (x!=answer); // ����� ������ ���� �Ǵ�
	
	print( "number of trial = %i\n", trial);//�õ� Ƚ�� ���  
	
	return 0;
}
