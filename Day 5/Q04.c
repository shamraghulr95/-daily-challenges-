#include<stdio.h>
int main()
{
	float amount,interest,time,rate;
	scanf("%f%f%f",&amount,&interest,&time);
	rate=(amount*interest*time/100);
	printf("rate=%.2f\n");
	return 0;
}
