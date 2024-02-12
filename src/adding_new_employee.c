#include "../includes/main.h"
#include "../includes/prototypes.h"
#include "../includes/structs.h"
#include "../includes/constants.h"

void addEmployee(emplyees *employee, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("enter employee name : ");
		scanf("%s", employee[i].name);
		printf("enter employee ID : ");
		scanf("%d", &employee[i].ID);
		printf("enter employee departement : ");
		scanf("%s", employee[i].departement);
		printf("enter employee annual salary : ");
		scanf("%f\n", &employee[i].annual_salary);
	}
    printf("\n");
    printf("employee added");
}
