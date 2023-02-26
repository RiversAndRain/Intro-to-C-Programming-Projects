#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0


void make_copy_of_string(char str[], char str_copy[]);
void remove_spaces(char[]);
void remove_special_char(char[]);
int length_check(char str[]);
_Bool is_palindrome(char[]);

int main(void)
{
    char user_input[101], user_input_copy[101];

    printf("Enter a phrase for palindrome checking: ");
    fgets(user_input, 101, stdin);

    make_copy_of_string(user_input, user_input_copy);

    if (is_palindrome(user_input_copy) == TRUE)
        printf("\nThe phrase: %s\nIs a palindrome!\n", user_input);
    else
        printf("Your phrase: %s\nIs not a palindrome!\n", user_input);
    
    return 0;
}

// function to make copy of string (and make copy all lower case)
void make_copy_of_string(char str[], char str_copy[])
{
    int i = 0;

    while (str[i] != '\n' && str[i] != '\0')
    {
        str_copy[i] = tolower(str[i]);
        i++;
    }
    str_copy[i] = '\0';
    str[i] = '\0';
}

// function to remove spaces
void remove_spaces(char str[])
{
    int spaces = 0;
    for ( int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[spaces] = str[i];
            spaces++;
        }
    }
    str[spaces] = '\0';
}

// function to remove special characters
void remove_special_char(char str[])
{
    char str_copy[101];
    make_copy_of_string(str, str_copy);
    int i = 0, c = 0;
    for (; str_copy[i] != '\0'; i++)
    {
       if (isalnum(str_copy[i]))
       {
        str[c] = str_copy[i];
        c++;
       }
    }
    str[c] = '\0';
}

// function to check length of string
int length_check(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; ++i);
    return i;
}

// function to check if input is palindrome
_Bool is_palindrome(char str[])
{
    remove_spaces(str);
    remove_special_char(str);
   
    _Bool is_pal = TRUE;
    int end_of_str = length_check(str)-1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != str[end_of_str])
        {
            is_pal = FALSE;
        }
        else
        {
            end_of_str--;
        }

    }

    return is_pal;
}
