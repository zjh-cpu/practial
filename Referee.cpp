#include "Referee.h"

Referee::Referee() {}

Player * Referee::refGame(Player * player1, Player * player2) {
    char move1 = player1->makeMove();
    char move2 = player2->makeMove();

    if (move1 == move2) return nullptr; // Tie

    if ((move1 == 'R' && move2 == 'S') || 
        (move1 == 'S' && move2 == 'P') || 
        (move1 == 'P' && move2 == 'R')) {
        return player1; // Player 1 wins
    } else {
        return player2; // Player 2 wins
    }
}
