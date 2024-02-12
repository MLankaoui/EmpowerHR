#include "../includes/main.h"
#include "../includes/prototypes.h"
#include "../includes/structs.h"

void options_handler(char c)
{
	if (c == 'a')
	{
        addEmployee(*employee);
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
