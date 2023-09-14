// Program in C to find the roots of a quadratic equation using if-else construct.
#include<stdio.h>
#include<math.h>
int main()
{
	// ax^2 + bx + c = 0
	float a, b, c, d, root;
	printf("Enter a, b, c of the qudratic equation\n");
	scanf("%f%f%f", &a, &b, &c);
	d=b*b-4*a*c;
	if(a==0)
	{
		root = -c/b;
		printf("Only one real root: %f\n", root);
	}
	else if(d==0)
	{
		root = -b/(2*a);
		printf("Only one real root: %f\n", root);
		
	}
	else if(d<0)
	{
		root = -b/(2*a);
		printf("First complex root: %f +i%f\n", root, sqrt(-d));
		printf("Second complex root: %f -i%f\n", root, sqrt(-d));
	}
	else	//d>0
	{
		root = -b/(2*a) + sqrt(d);
		printf("First real root: %f\n", root);
		root = -b/(2*a) - sqrt(d);
		printf("Second real root: %f\n", root);
	}
	return 1;		
}
