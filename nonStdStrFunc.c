#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[37] = "klairvoyance, clarity";
    char string2[17] = " AND MACHIAVELISM";
    
    // Standard C Funtions
    strcmp(string1, string2);     // string compare all characters
    strncmp(string1, string2, 1); // string compare n characters

    // Non-Standard C Funtions and their Standard Alternatives
    strupr(string1);               // converts a string to uppercase
                                   // ALT: toupper(), looping necessary
    
    strlwr(string1);               // converts a string to lowercase
                                   // ALT: tolower(), looping necessary
    
    strset(string1, '?');          // sets all characters of a string to a given character
    strnset(string1, 'x', 1);      // sets first n characters of a string to a given character
                                   // ALT: memset(str, ch, strlen(str)); or: memset(str, ch, n);
    
    strrev(string1);               // reverses a string
                                   // ALT: secondary array extracts characters in reverse with loop
    
    strcmpi(string1, string1);     // string compare all (ignore case)
                                   // int strcasecmp(const char *str1, const char *str2); // POSIX
    strnicmp(string1, string1, 1); // string compare n characters (ignore case)
                                   // int strncasecmp(const char *str1, const char *str2, size_t n); // POSIX
    return 0;
}