#include <stdio.h>
int main() //Frontdoor
{
    char choicen;
    
    printf("There is a villa.Do you want go to it?\nYes or No?[\"y\" or \"n\"]:");
    choicen = getchar();
    
    if (choicen = 'y')
    {
        printf("\nlivingroom()\n");
    }
    else
    {
        printf("Bye!\n");
    }
    return 0;
}
