#include <stdio.h>

int main(void)
{
    FILE *list = fopen("day 1a.txt", "r");
    if (list == NULL)
    {
        return 1;
    }
    
    const int SIZE = 2000;
    int numbers[SIZE];
    int larger = 0;
    int i;

    for (i = 0; i < SIZE; i++)
    {
        fscanf(list, "%i", &numbers[i]);
    }
    
    for (i = 1; i < SIZE; i++)
    {
        if(numbers[i] > numbers[i - 1])
        {
            larger++;
        }
    }
    
    printf("%i\n", larger);
    
    fclose(list);
}


