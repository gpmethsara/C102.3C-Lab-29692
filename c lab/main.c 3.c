#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2,add,choice,resuilt;

    printf("addition\n");
    printf("subtraction\n");
    printf("multipication\n");
    printf("division\n");

    scanf("%d",choice);
    printf("enter two numbers ");
    scanf("%d %d", &no1, &no2);

    switch (choice)
    {
    case 1:
        printf("result: %d\n", no1+no2);
        break;
    case2:
        printf("result: %d\n",no1-no2);
        break;
    case3:
        printf("result: %d|n",no1*no2);
        break;
    case4:
        printf("result: %d\n",no1/no2);
        break;
    default:
        printf("invalid choice\n");

    }

    return 0;
}
