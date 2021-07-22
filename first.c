#include<stdio.h>
int max(int a, int b, int c)
{
	if(a>b && a>c)
	return a;
	else if(b>c)	
	return b;
	else
	return c;
}
int main()
{
	int x,y,z;
	printf("Enter the values for x,y and z: \n");
	scanf("%d%d%d\n" ,&x,&y,&z);
	int m=max(x,y,z);
	printf("%d\n",m);
	return 0;
}
	
