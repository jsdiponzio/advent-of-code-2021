#include <stdio.h>

int main(void)
{
    FILE *list = fopen("day 1.txt", "r");
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
    
    for (i = 1; i < (SIZE - 2); i++)
    {
        int a = numbers[i];
        int b = numbers[i + 1];
        int c = numbers[i + 2];
        int d = numbers[i + 3];

        if (b + c + d > a + b + c)
        {
            larger++;
        }
    }
    
    printf("%i\n", larger);
    
    fclose(list);
}