//To check the even or odd using if-else statement

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Number is even!");
    }
    else
    {
        printf("Number is odd!");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

//To check the even or odd using Switch case statement 

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    switch (num)
    {
    case 1 : num%2==0;
    printf("Number is Even!");
        break;
    
    default:
    printf("Number is odd!");
        break;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
