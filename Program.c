/* If a character is entered through the keyboard,
write a program to determine whether the character is
a capital letter, a small case letter, a digit or a special symbol.
The following table shows theCII Values range of ASCII values for various characters:
Characters             ASCII Value
A-Z                    65-90
a-z                    97-122 
0-9                    48-57
special symbols        0-47, 58-64, 91-96, 123-127 */



#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n Enter a Character From The Keyboard : ");
    scanf("%c", &ch);
    if (ch>=65 && ch<=90)
        printf("Upper Case Letter\n");
    if (ch>=97 && ch<=122)
        printf("Lower Case Letter\n");
    if (ch>=48 && ch<=57)
        printf("Digit\n");
    if (ch>=0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=127)
        printf("Spcial Symbols \n");
    return 0;
}
