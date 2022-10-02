// 1. Write a program to calculate the length of the string. (without using built-in method)


#include <stdio.h>
int main()
{

    char string[] = "Nitin";
    int i = 0;
    for (i; string[i]; i++);
    printf("%d",i);

    return 0;
}
// 2. Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>
int main()
{
    char string[] = "Nitin";
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    int count = 0;
    for (int i = 0; string[i]; i++)
    {
        if (x == string[i])
            count++;
    }

    printf("%d", count);
    return 0;
}

// 3. Write a program to count vowels in a given string
// not finished
#include <stdio.h>
int main()
{
    char string[] = "Nitin";
    int count = 0;
    for (int i = 0; string[i]; i++)
    {
        if (("a"== string[i]) || (string[i] == "A") || (string[i] == "e") || (string[i] == "E") || ("i"==string[i]) || (string[i] == "I") || (string[i] == "o") || (string[i] == "O") || (string[i] == "u") || (string[i] == "U"))
            count++;
    }

    printf("%d", count);
    return 0;
}

// 4. Write a program to convert a given string into uppercase.

#include <stdio.h>
int main()
{
    char string[] = "Nitin";

    for (int i = 0; string[i]; i++)
    {
        if (string[i] >= 97 && string[i] <= 122)
            string[i] = string[i] - 32;
    }

    printf("%s", string);
    return 0;
}

// 5. Write a program to convert a given string into lowercase

#include <stdio.h>
int main()
{
    char string[] = "Nitin";

    for (int i = 0; string[i]; i++)
    {
        if (string[i] >= 65 && string[i] <= 92)
            string[i] = string[i] + 32;
    }

    printf("%s", string);
    return 0;
}

// 6. Write a program to reverse a string.

#include <stdio.h>
int main()
{
    char a[] = "kasif";

    for (int i = 0, j = 4; i < j; i++, j--)
    {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }

    printf("%s", a);
    return 0;
}

// // 7. Write a program in C to count the total number of alphabets, digits and special
// characters in a string.
#include <stdio.h>
int main()
{
    char a[] = "kas99ifm$@%";
    int alphabets = 0;
    int digits = 0;
    int specialCharacter = 0;
    for (int i = 0; a[i]; i++)
    {
        if ((a[i] >= 65 && a[i] <= 92) || (a[i] >= 97 && a[i] <= 122))
            alphabets++;
        else if (a[i] >= 47 && a[i] <= 57)
            digits++;
        else if ((a[i] >= 32 && a[i] <= 47) || (a[i] >= 58 && a[i] <= 64) || (a[i] >= 91 && a[i] <= 96) || (a[i] >= 123 && a[i] <= 126))
        {
            specialCharacter++;
        }
    }

    printf("alphabets are %d\n", alphabets);
    printf("digits are %d\n", digits);
    printf("specialCharacter are %d\n", specialCharacter);

    return 0;
}

// 8. Write a program in C to copy one string to another string.

#include <stdio.h>
int main()
{
    char a[] = "kasif";
    char b[6];
    for (int i = 0; a[i]; i++)
    {
        b[i] = a[i];
    }

    printf("%s", b);
    return 0;
}

// 9. Write a C program to sort a string array in ascending order.
#include <stdio.h>
int main()
{
    char a[] = "kasif";
    char b[6];
    for (int i = 0; i < a[i]; i++)
    {
        for (int j = i + 1; a[j]; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("%s", a);
    return 0;
}
// 10. Write a program in C to Find the Frequency of Characters.

#include <stdio.h>
int main()
{
    char a[] = "nitin";

    for (int i = 0; i < a[i]; i++)
    {

        int count = 1;
        for (int j = i + 1; a[j]; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = -1;
            }
        }
        if (a[i] != -1)
            printf("%c %d\n", a[i], count);
    }
    return 0;
}
