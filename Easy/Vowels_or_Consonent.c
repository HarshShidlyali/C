//Using If else statement 

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Alphabets Only : ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("The character is Vowel!!");
    }
    else 
    {
        printf("The Character is Consonent!!");
    }
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Using Switch Case Statement 
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
    printf("Its a vowel!");
        break;
    default:
    printf("Its a consonent!");
        break;
    }
}
