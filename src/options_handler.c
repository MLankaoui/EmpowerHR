#include "../includes/main.h"
#include "../includes/prototypes.h"
#include "../includes/structs.h"
#include "../includes/constants.h"

void options_handler(char c, int number_of_employees_to_add ,emplyees *employees) {
    if (c == 'a') {
        printf("Please enter number of employees: ");
        scanf("%d", &number_of_employees_to_add);
        addEmployee(employees, number_of_employees_to_add);
    }
    else if (c == 'b') {
        // Handle option 'b' here
    }
    else {
        while (c != 'a' && c != 'b') { // Use && instead of ||
            printf("%c is not a valid option. Please enter 'a' or 'b': ", c);
            scanf(" %c", &c); // Notice the space before %c to consume whitespace characters
        }
    }
}
