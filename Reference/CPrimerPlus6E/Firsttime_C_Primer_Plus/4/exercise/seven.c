#include<stdio.h>
#include<float.h>
int main()
{
	double d;
	float f;
	d=1.0/3.0;
	f=1.0/3.0;
	printf("double=\n%.6f\n%.12f\n%.16f\n",d,d,d);
	printf("float=\n%.6f\n%.12f\n%.16f\n",f,f,f);
	printf("FLT_DIG=%d\nDBL_DIG=%d\n",FLT_DIG,DBL_DIG);
	return 0;
}
