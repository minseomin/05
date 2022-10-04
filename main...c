#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num = 0; //숫자를 세는 거니까 숫자변수 하나 선언  
	
	printf("문자열을 입력하세요.\n");
	 
	while ((c=getchar())!='\n')// 입력문자가 개행문자가 나올 때까지 반복  ... 엔터를 누르는 순간 종료! 엔터가 개행문자가 되는거임  
	{
		if(c>='0' && c<='9')
			num=num+1;	//입력된 글자가 숫자인가? 참이면 num에 하나를 센다.  
	}
	
	printf("숫자의 개수는 %i 개 입니다.\n",num);// num출력
	 
	return 0;
}
