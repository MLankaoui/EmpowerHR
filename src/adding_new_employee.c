#include "../includes/main.h"
#include "../includes/structs.h"
#include "../includes/global_variables.h"

void addEmployee(emplyees *employee)
{
	int i;

	for (i = 0; i < number_of_employees_to_add; i++)
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
