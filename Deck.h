#ifndef DECK_H
#define DECK_H
class deck
{
    private:
        int card_number, pull;
    
    public:
        deck(void);//set up deck
        deck(int);//adds values to the deck
        int pull_card(void);//produces random value for either the player or the dealer
};

#endif

