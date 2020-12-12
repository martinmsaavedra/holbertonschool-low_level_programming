#include <stdio.h>
int main(void)
{
    int a;
    int b;
    int res;
    char int_res[100];

    for (a = 900; a < 1000; a++)
    {
        for (b = 900; b < 1000; b++)
        {
            res = a * b;
            sprintf(int_res, "%d", res);
            if (int_res[0] == int_res[5] && int_res[1] == int_res[4] && int_res[2] == int_res[3])
                printf( "a = %d b = %d a x b = %d\n", a, b, res);
        }
            
    }
        
    return (0);
}