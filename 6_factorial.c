#include <stdio.h>

void main()
{
    int facto (int n)
    {
        if (n == 1 || n == 0)
        {
            return 1;
        }
        else
        {
            return n * facto(n - 1);
        }
    }

    int num = 5;
    
    facto(num);


}