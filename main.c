#include <stdio.h>

int string_contains_q(char *expression);

int main()
{
	char expression[50];

	puts("Enter an expression to be evaluated:");

	while (string_contains_q(expression) == 0){
		scanf("%s", expression);
	}
}

int string_contains_q(char *expression)
{
	int i;

	for (i = 0; i < 50; i++){
		if (expression[i] == 'q'
		|| expression[i] == 'Q')
			return 1;

	}

	return 0;
}
