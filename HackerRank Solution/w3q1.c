#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int L, time, W, H;
    scanf("%d", &L);
    scanf("%d", &time);
    for (int i = 0; i < time; i++)
    {
        scanf("%d %d", &W, &H);
        if (W < L || H < L)
        {
            printf("UPLOAD ANOTHER\n");
        }
        else if (W >= L && H >= L)
        {
            if (W == H)
            {
                printf("ACCEPTED\n");
            }
            else
            {
                printf("CROP IT\n");
            }
        }
    }
    return 0;
}
