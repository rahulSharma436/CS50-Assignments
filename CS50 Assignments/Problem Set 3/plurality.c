#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 9

typedef struct
{
    char name[50]; 
    int votes;
}
candidate;

candidate candidates[MAX];
int candidate_count;

bool vote(const char* name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].votes++;
            return true; //vote successfully cast
        }
    }
    return false; //candidate not found
}

void print_winner(void)
{
    int max_votes = 0;
    int winner_index = 0;

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > max_votes)
        {
            max_votes = candidates[i].votes;
            winner_index = i;
        }
    }

    printf("Winner: %s\n", candidates[winner_index].name);
}

int main(int argc, char* argv[])
{
    candidate_count = argc - 1;

    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }

    for (int i = 0; i < candidate_count; i++)
    {
        strcpy(candidates[i].name, argv[i + 1]); 
        candidates[i].votes = 0;
    }

    vote("Alice");
    vote("Bob");
    vote("Alice");
    vote("Alice");
    vote("Charlie");

    print_winner();// Alice because it is called 3 times!

    return 0;
}