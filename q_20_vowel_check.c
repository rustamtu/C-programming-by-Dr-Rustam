//Check if an alphabet is vowel or consonant using ternary operator
#include<stdio.h>
int main()
{
	char x;
	int flag;

	printf("Enter an alphabet\n");
	scanf("%c", &x);
	flag=x=='a'?1:(x=='e'?1:(x=='i'?1:(x=='o'?1:(x=='u'?1:0))));

	if(flag)
	{
		printf("%c is a vowel\n", x);
	}else
	{
		printf("%c is a consonent\n", x);
	}
}
