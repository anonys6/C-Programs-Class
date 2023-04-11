#include <stdio.h>

struct Player
{
    int id;
    int runs;
};

int main()
{
    int no_of_player;
    scanf("%d", &no_of_player);
    struct Player team[no_of_player];

    int total_score = 0;

    for (int i = 0; i < 11; i++)
    {
        scanf("%d %d", &team[i].id, &team[i].runs);
        total_score = total_score + team[i].runs;
    }

    printf("%d\n", total_score);

    return 0;
}
