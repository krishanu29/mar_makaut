/*check the palindrome number*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,reversedn=0,remainder,originaln;
	printf("Enter the number: ");
	scanf("%d",&n);
	originaln=n;
	while(n!=0)
	{
		remainder=n%10;
		reversedn=reversedn*10+remainder;
		n=n/10;
	}
	if(originaln==reversedn)
	printf("%d is a palindrome",originaln);
	else
	printf("%d is not a palindrome",originaln);
	getch();
	return 0;
}
