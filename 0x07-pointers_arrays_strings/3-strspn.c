#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to evaluate
 * @char: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char* s, char* accept) {
    unsigned int count = 0;
    int found = 1;

    while (*s != '\0' && found) {
        found = 0;
        for (int i = 0; accept[i] != '\0'; i++) {
            if (*s == accept[i]) {
                count++;
                found = 1;
                break;
            }
        }
        s++;
    }

    return count;
}
