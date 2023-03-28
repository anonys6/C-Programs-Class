// // #include <stdio.h>
// // int main()
// // {
// //     int *p = 1000;
// //     printf("%d", p + 5);
// //     return 0;
// // }

// #include <stdio.h>
// void solve()
// {
//     int n = 24;
//     int l = 0, r = 100, ans = n;
//     while (l <= r)
//     {
//         int mid = (l + r) / 2;
//         if (mid * mid <= n)
//         {
//             ans = mid;
//             l = mid + 1;
//         }
//         else
//         {
//             r = mid - 1;
//         }
//     }
//     printf("%d", ans);
// }
// int main()
// {
//     solve();
//     return 0;
// }

#include <stdio.h>

int main()
{
    int i = 7;
    printf("%d %d %d %d", i++, i, ++i, i + 1);
    // printf("%d", i);
    
    return 0;
}