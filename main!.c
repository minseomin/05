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
	
	while (x!=answer); // 정답과 같은지 여부 판단
	
	print( "number of trial = %i\n", trial);//시도 횟수 출력  
	
	return 0;
}
