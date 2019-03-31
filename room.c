#include <stdio.h>
void livingroom();
void garage();
void kitchen();
void frontdoor()
{
    char choicen;

    printf("There is a villa.Do you want go to it?\nYes or No?[\"y\" or \"n\"]:");
    choicen = getchar();

    if (choicen == 'y')
        livingroom();
    else
        printf("Bye!\n"); 
}

void livingroom()
{
    char choicen1;
    
    printf("This is livingroom.\nThere are garage and kitchen.\nHave a choice[ \"g\", \"k\" or \"b\" ot back]:");
    choicen1 = getchar();

    if (choicen1 == 'g')
        garage();
    else if (choicen1 == 'k')
        kitchen();
    else
        frontdoor();
}

void garage()
{
    char ch;

    printf("This is garage.\nType anything to backup:");
    if (ch = getchar())
        frontdoor();
}

void kitchen()
{
    printf("There is kitchen");
}
