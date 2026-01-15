#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char username[] = "manish";
    char password[20];
    int i, valid = 1;

    printf("Enter password (6 alphanumeric characters): ");
    scanf("%s", password);

    if (strlen(password) != 6)
    {
        valid = 0;
    }


    for (i = 0; password[i] != '\0'; i++)
    {
        if (!isalnum(password[i]))
        {
            valid = 0;
            break;
        }
    }

    if (valid)
    {
        printf("\nUsername: %s", username);
        printf("\nPassword: %s", password);
    }
    else
    {
        printf("\nInvalid password!");
        printf("\nPassword must be exactly 6 characters and contain only letters and digits.");
    }

    return 0;
}
