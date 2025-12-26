#include <stdio.h>

int main()
{
    int mean, mdn, mode;

    printf("Enter median: ");
    scanf("%d", &mdn);

    printf("Enter mode: ");
    scanf("%d", &mode);

    mean = (3 * mdn - mode) / 2;

    printf("Mean = %d", mean);

    return 0;
}




