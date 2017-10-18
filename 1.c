#include<stdio.h>
int main()
{
	int i;
	char a[100];
	for(i=1;i<=4;++i)
	{
		printf("i above:%d\n",i);
		scanf("%c",&a[i]);
		printf("i below:%d\n",i);
	}
	printf("%s\n",a);
}
