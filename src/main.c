#include "../includes/main.h"
#include "../includes/structs.h"

int main(int argc, char **argv)
{
	char user_option;
    
    printf("Hello Welcome to EMPOERHR\n");
	printf("=========================\n\n\n");

	printf("[a] -> Adding new employee details\n");
	printf("[b] -> Displaying all existing ones\n\n");

    printf("Please mr select one of this options : ");
    scanf("%c", &user_option);

    options_handler(user_option);
	return (0);
}
