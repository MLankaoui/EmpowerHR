#include "../includes/main.h"
#include "../includes/prototypes.h"
#include "../includes/structs.h"
#include "../includes/constants.h"

int main(int argc, char **argv)
{
    int number_of_employees_to_add = 0;
    char user_option;
    emplyees employees[MAX_EMPLOYEES];
    char choice;
    
    printf("Hello Welcome to EMPOERHR\n");
    printf("=========================\n\n\n");

    printf("[a] -> Adding new employee details\n");
    printf("[b] -> Displaying all existing ones\n\n");

    printf("Please select one of these options : ");
    scanf(" %c", &user_option);

    options_handler(user_option, number_of_employees_to_add, employees);

    return 0;
}
