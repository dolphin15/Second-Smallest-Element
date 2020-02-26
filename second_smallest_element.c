//NIHAN AKINCI

#include <stdio.h>
int main()
{
    unsigned int number, smallest, second;

        printf("Please enter a positive number or -1 to finish.: ");
        scanf("\n%d", &number);

        smallest = number;

        while(number != -1)
        {

            printf("Please enter a positive number or -1 to finish.: ");
            scanf("\n%d", &number);

            if(number != -1)
            {
                if(number < smallest)
                {
                    second = smallest;
                    smallest = number;
                }

                else if(number < second)
                {
                    second = number;
                }
            }
        }

    printf("The second smallest number is %d", second);

    return 0;
}
