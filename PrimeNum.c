//=======================================================================
// Author:		Theodore Brucker
// Date:  		3/6/2021
// Language:	C
// Example:		Prime Number Generator
// File:   		PrimeNum.c
//=======================================================================

#include <stdio.h>

int main()
{
    int num, bool, i;

    num = 0;

    while(num < 1000)
    {
        bool = 1;
        for(i = 2; i < 100; i++)
        {
            if(num % i == 0 && num != i)
            {
                bool = 0;
            }
        }
 
        if(bool)
        {
            printf("%d\n", num);
        }
        num++;
    }
    return 0;
}