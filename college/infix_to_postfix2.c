#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
struct stack
{
	int data[20];
	int tos;
};

int evaluate(int op1, int op2, char op)
{
	switch(op)
	{
		case '+':
			return (op1 + op2);
		case '-':
			return (op1 - op2);
		case '*':
			return (op1 * op2);
		case '/':
			return (op1 / op2);
		case '^':
			return (pow(op1, op2));
	}
};

int main()
{
	struct stack s;
	char x, postfix[20];
	int operand1, operand2, value, result;
	int i;

	s.tos = -1;

	printf("\nEnter postfix expression: \n");
	fgets(postfix, 20, stdin);

	for(i = 0; postfix[i] != '\0'; i++)
	{
		if(isalpha(postfix[i]))
		{
			printf("\nEnter the value of %c: ", postfix[i]);
			scanf("%d", &value);
			s.tos++;
			s.data[s.tos] = value;
		}
		else
		{
			operand2 = s.data[s.tos];
			operand1 = s.data[s.tos - 1];
			result = evaluate(operand1, operand2, postfix[i]);
			s.tos--;
			s.data[s.tos] = result;
		}
	}

	printf("\n\n%d\n", s.data[s.tos + 1]);
}