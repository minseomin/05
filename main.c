#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	
	printf("정수 하나를 입력하세요 : ");
	scanf("%d",&x);
	
	if (x>0)
	printf(x);
	
	else if (x<0)
	printf(-x);
	 
	else
	print(0);
	
	return 0;
}
