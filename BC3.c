#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sent[50];
    printf("most spontaneous thing youve done?\n");
    fgets(sent,50,stdin); // automatically prints \n, which is the Enter you pressed
    sent[strlen(sent) - 1] = '\0';
    printf("what you said was: \"%s\"\n", sent);

    char shop[50];
    printf("which store did you go to?\n");
    fgets(shop,50,stdin); 
    shop[strlen(shop) - 1] = '\0'; // replaces newline with null character?
    printf("you went to the %s shop\n", shop);
}