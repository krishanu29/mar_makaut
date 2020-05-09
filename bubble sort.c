/*implement bubble sort*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,temp,n;
	printf("\n Enter the max no.of elements to sort: \n");
	scanf("%d",&n);
	printf("\n Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
	return 0;
}
