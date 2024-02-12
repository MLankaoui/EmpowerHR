#include "../includes/main.h"
#include "../includes/prototypes.h"
#include "../includes/structs.h"
#include "../includes/global_variables.h"

void options_handler(char c)
{
	if (c == 'a')
	{
		printf("please enter number of employees : ");
		scanf("%d", &number_of_employees_to_add)
        addEmployee(*employee, number_of_employees_to_add);
	}

	if (c == 'b')
	{
        
	}

	while (c != 'a' || c != 'b')
	{
		perro("please %c is not a valid option", c);
		scanf("%c", &c);
	}
}
