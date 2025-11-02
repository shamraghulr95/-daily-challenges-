#include<stdio.h>
int main()
{
	float a,b,sqrt,rect,circle,triangle;
	scanf("%f%f",&a,&b);
	sqrt=a*a;
	rect=a*b;
	circle=3.14*(a*a);
	triangle=1/2*(a*b);
	printf("%f\n%f\n%f\n%f\n",sqrt,rect,circle,triangle);
	return 0;
}
