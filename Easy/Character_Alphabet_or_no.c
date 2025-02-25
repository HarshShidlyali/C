//In this program we can check weather the character is alphabet or not
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("Entered Character is Alpahbet : ");
    }
    else
    {
        printf("Entered Character is not an Alphabet ");
    }
}
