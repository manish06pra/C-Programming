#include <stdio.h>
#include <stdlib.h>

struct Book
 {
    char title[100];
    char author[50];
    float price;
};

int main()
 {

    struct Book book1={"The Hitchhiker's Guide to the Galaxy","Duglas Adams",385};

    printf("Title: %s\n""Author: %s\n""Price: %2f\n\n", book1.title,book1.author,book1.price);

    struct Book book2={"The God Of Small Things","Arundhati Roy",530};

    printf("Title: %s\n""Author: %s\n""Price: %2f\n\n", book2.title,book2.author,book2.price);

    struct Book book3={"Wings Of Fire","Dr A P J Abdul Kalam",680};

    printf("Title: %s\n""Author: %s\n""Price: %2f\n\n", book3.title,book3.author,book3.price);

    struct Book book4={"Whispers Of The Heart","Darcy Bennet",550};

    printf("Title: %s\n""Author: %s\n""Price: %2f\n\n", book4.title,book4.author,book4.price);

    struct Book book5={"In Another Life","Leslie W Jones",826.25};

    printf("Title: %s\n""Author: %s\n""Price: %2f\n\n", book5.title,book5.author,book5.price);


    return 0;
}
