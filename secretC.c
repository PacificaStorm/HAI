#include "stdio.h"

int main(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);
    
    char passw[20];
    char pw[20] = "adam";
    printf("Please input the password:  ");
    scanf("%s", &passw);

    if (strcmp(passw, pw) == 0) {
        printf("Super secret stuff: I hate C");
    }
    else {
        printf("Sorry, that's wrong!");
    }
    return 0;
}

