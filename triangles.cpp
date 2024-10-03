#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("enter the value of s1,s and s3 of a tringle ");
	scanf("%d%d%d",&s1,&s2,&s3);
	if((s1+s2>s3)&&(s2+s3>s1)&&(s1+s3>s2))
	{
		if(s1==s2&&s2==s3)
		{
		printf("the triangle is equilateral");
		
		}
		else if(s1==s2||s2==s3||s1==s3)
		{
			printf("the triangle is isosceles");
		}
		else{
		
		printf("the triangle is scalene");
		
	}
		printf("the given side do not form a valide triangle");
	}
			return 0;
}

