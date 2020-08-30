#include <stdio.h>

int main(){
	int input1, input2,start, prima = 0;
	scanf("%d %d", &input1, &input2);
	for(int i=input1; i<=input2; i++)
	{
		for(int a=2; a<i; a++)
		{
			if(i% a == 0)
			{
				prima = 1;
				break;
			}
			else 
			{
				prima= 0;
			}
		}
		if (prima == 0 && i != 1)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
