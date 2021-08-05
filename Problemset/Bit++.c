#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// The link of the problem 
// https://codeforces.com/contest/282/problem/A

int validOperation(char *op);
int updateX(char *op, int x);

int main(void)
{
    int X = 0; //initialize x with zero
    
    //number of string inputs
    int n;
    scanf("%i", &n);
    
    //Validate that n is with in the required range
    if (n < 1 || n > 150)
    {
        printf("You should enter a number between 1 & 150");
        return 2;
    }

    //declare the expression variable
    char *operation = malloc(4 * sizeof(char));
    if (operation == NULL)
    {
        printf("Segmentation Fault");
        return 3;
    }

    //get the bit expression from user
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", operation);
        
        //check that the expression is right
        if (validOperation(operation))
        {
            //update the value of x due to the operation
            X = updateX(operation, X);
        }
        else
        {
            printf("Invalid operation.\n please try again using for example X++ or --X");
            return 1;
        }
    }
    
    //print the final output
    printf("%i\n", X);
    free(operation);
    return 0;
}

//validate the operation
int validOperation(char *op)
{
    if (op[0] == 'X')
    {
        if ((op[1] == '+' && op[2] == '+') || (op[1] == '-' && op[2] == '-'))
        {
            return 1;
        }
    }
    else if ((op[0] == '+' && op[1] == '+') || (op[0] == '-' && op[1] == '-'))
    {
        if (op[2] == 'X')
        {
            return 1;
        }
    }
    
    return 0;
}

//update the value of x
int updateX(char *op, int x)
{
    //checking the middle char
    if (op[1] == '+')
    {
        x++;
    }

    else
    {
        x--;        
    }
    
    return x;
}