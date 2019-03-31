#include <stdio.h>
#include "livingroom.h"
int main() //Frontdoor
{
    char choicen;
    
    printf("There is a villa.Do you want go to it?\nYes or No?[\"y\" or \"n\"]:");
    choicen = getchar();
    
    if (choicen == 'y')
        livingroom();
    else
        printf("Bye!\n");

    return 0;
}
