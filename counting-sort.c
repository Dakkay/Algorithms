#include <stdio.h>
#include <time.h>	// for clock_t, clock()
#include <unistd.h>	// for sleep()

// C program to find the execution time of code
int main()
{
	// to store execution time of code
	double time_spent = 0.0;

	clock_t begin = clock();

	

	
	int a =3,b=3;
	int c;
	c=a+b;
	int d =3,e=3;
	int f;
	f=e+d;
	int i;






	sleep(2);


	clock_t end = clock();

	// calculate elapsed time by finding difference (end - begin) and
	// divide by CLOCKS_PER_SEC to convert to seconds
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("\n Time elpased is %f seconds \n \n ", time_spent);

	return 0;
}