#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;
    printf("enter an integer ");
    scanf("%d",&no);

    switch (no % 2)
    {
        case 1:
            printf("%d is an odd number\n",no);
            break;

        case 0:
            printf("%d is an even number\n",no);
            break;
    }
    return 0;
}
