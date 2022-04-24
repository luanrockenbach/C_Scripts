#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c;
    int myNumber;
    int array[3] = {1, 2, 3};
    printf("Hello world!!!\nHello World 1, 2, 3\n");

    for(int i=0; i<3; i++)
    {
       printf("\n%d\n", array[i]);

    }
    printf("\nDone!!\n");

    myNumber = 0;
    if(myNumber != 8)
    {
        printf("\nThe value of myNumber is: %d\n", myNumber);
        myNumber = 8;
        for(int j=0; j<3; j++)
        {
            printf("The value of myNumber is: %d\n", myNumber);
            myNumber++;
        }
    }
    else
    {
        printf("\nThe value of myNumber is: %d\n", myNumber);
        for(myNumber; myNumber <10; myNumber++)
        {
            printf("The value of myNumber is: %d\n", myNumber);
        }
    }

    //Calculator
    printf("\nType one Number: \n");
    scanf("%d", &a);

    printf("Type another Number: \n");
    scanf("%d", &b);
    c = a+b;
    printf("The result is: %d\n", c);

    return 0;
}