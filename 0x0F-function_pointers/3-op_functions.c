/**
* op_add - function that adds two numbers
* @a: first number
* @b: second number
* Return: int
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - function that substracts two numbers
* @a: first number
* @b: second number
* Return: int
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - function that multiplies two numbers
* @a: first number
* @b: second number
* Return: int
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - function that divises two numbers
* @a: first number
* @b: second number
* Return: int
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a / b);
}
/**
* op_mod - function that returns the remainder of two numbers
* @a: first number
* @b: second number
* Return: int
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a % b);
}

