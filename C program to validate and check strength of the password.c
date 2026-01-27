

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char password[50];
    int i;
    int hasUpper = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter password: ");
    scanf("%s", password);

    int len = strlen(password);

    
    if (len < 8 || len > 15) {
        printf("Password length must be between 8 and 15 characters.\n");
        return 0;
    }

    
    for (i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else if (!isalnum(password[i]))
            hasSpecial = 1;
    }

    int strength = hasUpper + hasDigit + hasSpecial;

    if (strength == 1)
        printf("Password Strength: WEAK\n");
    else if (strength == 2)
        printf("Password Strength: MODERATE\n");
    else if (strength == 3)
        printf("Password Strength: STRONG\n");
    else
        printf("Password Strength: VERY WEAK\n");

    return 0;
}


