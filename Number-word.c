#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
    int x;
    printf("Enter the number:\n");
    scanf_s("%d", &x);

    if ((x >= 1 == 1) && (x <= 9 == 1))
    {
        if (x == 1) { printf("one"); }
        else if (x == 2) { printf("two"); }
        else if (x == 3) { printf("three"); }
        else if (x == 4) { printf("four"); }
        else if (x == 5) { printf("five"); }
        else if (x == 6) { printf("six"); }
        else if (x == 7) { printf("seven"); }
        else if (x == 8) { printf("eight"); }
        else { printf("nine"); }
    }
    else {
        printf("Greater than 9");
    }

    return 0;
}
