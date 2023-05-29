#include<stdio.h>

main()


{
	
	int a[100];
	int i,n,sum=0;
	printf("Enter size of array=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
    	printf("a[%d]=",i);
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of all element=%d",sum);
}
