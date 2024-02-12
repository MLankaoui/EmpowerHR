#include "../includes/main.h"
#include "../includes/prototypes.h"
#include "../includes/structs.h"
#include "../includes/global_variables.h"

void addEmployee(emplyees *employee, int n);
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("enter employee name : ");
		scanf("%s", employee->name);
		printf("enter employee ID : ");
		scanf("%d", employee->ID);
		printf("enter employee departement : ");
		scanf("%s", employee->departement);
		printf("enter employee annual salary : ");
		scanf("%f", employee->annual_salary);
	}
}
