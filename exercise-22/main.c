#include <stdio.h>
#include <stdlib.h>
#define N 2
//TENIS TURNUVASINA KATILACAK YARISMACI VE OYUNCULARIN BILGILERINI ALAN PROGRAM(KARMASIK SORU)
struct player
{
    char name[10];
    char surname[10];
    int age;
    int level;
};

struct team
{
    char team_name[10];
    struct player player1;
    struct player player2;

};
void create_player(struct player *j)
{
    printf("enter player name: ");
    scanf("%s",j->name);
    printf("enter player surname: ");
    scanf("%s",j->surname);
    printf("enter player age: ");
    scanf("%d",&j->age);
    printf("enter player level: ");
    scanf("%d",&j->level);
}
void team_create(struct team *e)
{
    printf("enter  team name:\n");
    scanf("%s",e->team_name);
    printf("enter player1 information: \n");
    create_player(&e->player1);
    printf("enter player2 information: \n");
    create_player(&e->player2);
}


void player_show(struct player j)
{
    printf("Name: %s\n",j.name);
    printf("Surname: %s\n",j.surname);
    printf("Age: %d\n",j.age);
    printf("Level: %d\n",j.level);
}

void team_show(struct team e)
{
    printf("Team Name: %s\n",e.team_name);
    printf("Player 1 : \n");
    player_show(e.player1);
    printf("Player 2 : \n");
    player_show(e.player2);
}
int main()
{
    struct team tab[N];
    int i;

    for(i=0;i<N;i++)
    {
        printf("Team %d :\n",i);
        team_create(&tab[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("TEAM %d: ",i+1);
        team_show(tab[i]);
    }

    return 0;
}
