#include <stdio.h>
#include <stdbool.h>

bool upordown()
{
    int x, y = 0;

    if (&x > &y)
    {
        return true;
    }

    return false;
}

int main()
{
    printf("%s\n", upordown() ? "Up" : "Down");
    return 0;
}