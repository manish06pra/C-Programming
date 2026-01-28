#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
    char password[50];
    int hasUpper=0,hasDigit=0,hasSymbol=0;
    int i,length,score=0;
    printf("Enter the password:");
    scanf("%s",password);
    length=strlen(password);
    if(length<8||length>15){
     printf("\nresult:Invalid\n");
     printf("Reason:Password must be between 8 and 15 characters.\n");
     return 0;
    }
     for(i=0;i<length;i++){
        if(isupper(password[i]))hasUpper=1;
        else if(isdigit(password[i]))hasDigit=1;
        else if(!isalnum(password[i]))hasSymbol=1;
     }
     score=hasUpper+hasDigit+hasSymbol;
     printf("\n---Analysis--\n");
     if(!hasUpper||!hasDigit||!hasSymbol){
            printf("Status:Invalid\n");
     printf("Missing:");
     if(!hasUpper) printf("[uppercase]");
     if(!hasDigit) printf("[Numeric]");
     if(!hasSymbol) printf("[Symbol]");
     printf("\n");
     }
     else{
        printf("Status:Valid\n");
     }
     if(score==3){
        printf("Strength:Strong\n");
    if(score==2){
        printf("Strength:Moderate\n");
    }else{
        printf("Strength:Strong\n");

     }
     return 0;
}
}


