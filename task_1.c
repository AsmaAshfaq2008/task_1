# include<stdio.h>
# include<math.h>
# define PI 3.14159
int main()
{
	float radius = 5.0;
	float area = PI*radius*radius;
	float circumference = 2*PI*radius;
	printf("Radius is %.2f\n",radius);
	printf("Area is %.2f\n",area);
	printf("Circumference is %.2f\n",circumference);
	return 0;
}

