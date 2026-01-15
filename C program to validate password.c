#include<string.h>
#include<stdio.h>
int main()
{
    char username[] = "manish";
    char pass[]="man123";
    char password[20];
    printf("\nUsername: %s", username);
    printf("\nEnter the password:");
    scanf("%s",password);
    if(strcmp(pass,password)==0)
    {

        printf("Validate");
        printf("\nUsername: %s", username);
        printf("\nPassword: %s", password);

    }
    else
    {


        printf("not valid");
    }
       return 0;
}

