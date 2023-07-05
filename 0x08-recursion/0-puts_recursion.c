#include <stdio.h>

void puts_recursion(char *s)
{
    if (*s == '\0') {
        putchar('\n');
        return;
    }
    
    putchar(*s);
    puts_recursion(s + 1);
}

int main()
{
    char *str = "Hello, world!";
    
    puts_recursion(str);
    
    return 0;
}







