#include<stdio.h>
int main ()
{
	int a ,b , k, lcm =1;
	printf("Enter two numbers: \n");
	scanf("%d%d", &a, &b);
	lcm =( a > b) ? a : b;
	lcm=k;
	while (1)
	{
		if (lcm%a == 0 && lcm%b == 0)
		
			break;
			lcm=lcm+k;
		
	}
	printf("\n LCM = %d", lcm);
}
