// Continue --> Skips Particular set of lines.

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        { // Skip this value
            continue;
        }
        printf("%d \n", i);
    }
}