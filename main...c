#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int x; //���庯�� 
	int trial;
	 
	do
	{
	printf("Guess a number: ");	// �Է��ض� ���� ���
	scanf("%d", &x);	// �Է��� ����
	
	if (x> answer)
	print ("low!");
	
	else
	print ("high!"); 	// �Է¼��ڰ� ���亸�� ū�� ������ ���  
	}
	
	while (x = answer ); //����� ������ ���� �Ǵ�  
	
	if (x>=0)
		trial = trial +1;
	
	printf("Number of trial = %i \n", trial); //�õ� Ƚ�� ���  
	return 0;
}
