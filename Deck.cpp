#include <stdio.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Deck.h"
deck::deck(void)
{
    card_number = 11; //total card number
    std::srand(std::time(NULL));
}

deck::deck(int s)
{
    card_number = s;
    std::srand(std::time(NULL));
    // Add code for deck initialization with a specific number of cards if needed
}

int deck::pull_card(void)
{
    return std::rand() % card_number + 1;
}
