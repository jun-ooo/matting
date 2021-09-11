#include <stdio.h>

int main()
{
	int Fahrenheit[16] = {1, 20, 40, 60, 80, 100, 120,
	                	140, 160, 180, 200, 220, 
				240, 260, 280, 300};
	for(int i=0; i<16; i++)
	{
		printf("%d\t%f\n",Fahrenheit[i],(Fahrenheit[i]-32)*5/9.0);
	}

	for(int i=0; i<16; i++)
	{
		printf("%3d %6.1f\n",Fahrenheit[i],(Fahrenheit[i]-32)*5/9.0);
	}

	printf("char\t%d\n", sizeof(char));
	printf("short\t%d\n", sizeof(short));
	printf("int\t%d\n", sizeof(int));
	printf("float\t%d\n", sizeof(float));
	printf("long\t%d\n", sizeof(long));
	printf("double\t%d\n", sizeof(double));

}
