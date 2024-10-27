#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    FILE* fptr;

   
    fptr = fopen("text.txt", "r");

    
    if (fptr == NULL) 
    {
        printf("The file is not opened. The program will now exit.");
    }

    
    fclose(fptr);

    return 0;
}