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
