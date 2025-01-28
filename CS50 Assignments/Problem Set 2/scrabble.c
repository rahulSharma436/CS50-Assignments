#include <stdio.h>
#include <string.h>

int score_word(const char *word) {
    int score = 0;
    int letter_values[] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
    };

    for (int i = 0; word[i] != '\0'; i++) {
        score += letter_values[word[i] - 'A']; // beacuse it helps in converting the index from 2 digit numbers to 1 digit numbers ; and helps in accessing elements of the letters array!
    }

    return score;
}

int main() {
    char player1_word[50], player2_word[50];
    int player1_score, player2_score;

    printf("Player 1: ");
    scanf("%s", player1_word);

    printf("Player 2: ");
    scanf("%s", player2_word);

    player1_score = score_word(player1_word);
    player2_score = score_word(player2_word);

    if (player1_score > player2_score) {
        printf("Player 1 wins!\n");
    } else if (player2_score > player1_score) {
        printf("Player 2 wins!\n");
    } else {
        printf("Tie!\n");
    }

    return 0;
}