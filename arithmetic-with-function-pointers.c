//Orion Guan
//February 10th, 2017

#include<stdio.h>

void add(double firstDouble, double secondDouble);
void subtract(double firstDouble, double secondDouble);
void multiply(double firstDouble, double secondDouble);
void divide(double firstDouble, double secondDouble);

int main()
{
	int operationIndex;
	double firstDouble;
	double secondDouble;
	void (*binaryArithOperators[4])(double firstDouble,
									double secondDouble) = {add,
														    subtract,
														    multiply,
														    divide};

	printf("Give me a sign!\n1 = +\n2 = -\n3 = x\n4 = /\n");
	scanf("%d", &operationIndex);

	printf("Give me two numbers!\n");
	scanf("%lf", &firstDouble);
	scanf("%lf", &secondDouble);

	if (operationIndex >= 1 && operationIndex <= 4)
	{
		(*binaryArithOperators[operationIndex - 1])(firstDouble, secondDouble);
	}
	else
	{
		printf("invalid operation index\n");
	}
}

void add(double firstDouble, double secondDouble)
{
	double result = firstDouble + secondDouble;
	printf("%lf + %lf = %lf\n", firstDouble, secondDouble, result);
}
void subtract(double firstDouble, double secondDouble)
{
	double result = firstDouble - secondDouble;
	printf("%lf + %lf = %lf\n", firstDouble, secondDouble, result);
}
void multiply(double firstDouble, double secondDouble)
{
	double result = firstDouble * secondDouble;
	printf("%lf * %lf = %lf\n", firstDouble, secondDouble, result);
}
void divide(double firstDouble, double secondDouble)
{
	if (secondDouble != 0)
	{
		double result = firstDouble / secondDouble;
		printf("%lf + %lf = %lf\n", firstDouble, secondDouble, result);
	}
	else
	{
		printf("Divide by zero error\n");
	}
}