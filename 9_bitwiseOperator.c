// #include <stdio.h>

// int main()
// {
//     // printf("23 & 56: %d\n", 23 & 56);
//     // printf("23 | 56: %d\n", 23 | 56);
//     // printf("23 ^ 56: %d\n", 23 ^ 56);
//     // printf("56 >> 2: %d\n", 56 >> 2);
//     // printf("")



//     return 0;
// }

#include <stdio.h>

void main ()
{
  int m, n;
  
  scanf("%d%d", &m, &n);
  if (m % n == 0)
  {
    printf("1");
  }
  else
  {
    printf("0");
  }
}