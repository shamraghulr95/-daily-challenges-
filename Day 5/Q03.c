#include<stdio.h>
int main()
{
	int x1,x2,y1,y2,z;
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    z=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%d",z);
    return 0
}
