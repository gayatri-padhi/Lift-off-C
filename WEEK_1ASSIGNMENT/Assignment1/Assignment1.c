#include<stdio.h>
int main()
{
	int n1,n2,ans;
	printf("Enter the first number\n");
	scanf("%d",&n1);
	printf("Enter the second number\n");
	scanf("%d",&n2);
	ans = n1 + n2;
	printf("The Sum is : %d\n",ans);
	ans = n1 - n2;
	printf("The Difference is : %d\n",ans);
	ans = n1*n2;
	printf("The Multipliction is : %d\n",ans);
	ans = n1/n2;
	printf("The Division is : %d\n",ans);
	ans = n1%n2;
	printf("The Reminder is : %d\n",ans);
	return 0;
}
