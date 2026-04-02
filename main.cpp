/******************************************************************************

Project 2 Black Jack
David Ritter
Noah Clay
11/29/2023

*******************************************************************************/
#include <stdio.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"

int main()

{
    //explanation of rules to player
    std::cout << "Black Jack Rules" << std::endl;
    std::cout << "You will be dealt 2 cards your points will be based on those numbers" << std::endl;
    std::cout << "Next the dealer will be dealt a card." << std::endl;
    std::cout << "You can then choose to either hit me which will give you a card or pass and let the dealer take another turn" << std::endl;
    std::cout << "the first one to reach 21 points wins the game." << std::endl;
  
    //game set up
    int goal = 21;
    int p_score = 0;
    int d_score = 0;
    char choice;
    bool p_win = false, d_win = false;
    std::string player_name;
    std::cout << "Enter Your name: "<< std::endl;
    std::cin>> player_name;

    player my_player(player_name);
    dealer my_dealer("dealer");
    deck my_deck; // declaration and initialization
    //main game logic
    while (!p_win && !d_win)//while player and dealer have not won
        {
        if (!p_score)
            {
            my_player.hit_me(my_deck.pull_card());
            my_dealer.bank_it(my_deck.pull_card());
            p_score += my_deck.pull_card();
            d_score += my_deck.pull_card();
            //Your current score 
            }
        
    std::cout<<"Current score - " << my_player.get_name() << ": " << p_score << ": " << my_dealer.get_name() << ": " << d_score <<std::endl;
         if (p_score > goal) 
            {
            std::cout << "Bust" << std::endl;
            return 0;
            } else if (d_score > goal ) {
            std::cout << "Dealer Bust" << std::endl;
            return 0;
            }

        if (p_score == goal)
            {
            std::cout << my_player.get_name() << " wins!" << std::endl;
            p_win = true;
            }
        else if (d_score == goal)
            {
            std::cout << my_dealer.get_name() << " wins!" << std::endl;
            d_win = true;
            }
        else
            {
            // Ask the player to hit or pass
            std::cout << "Do you want to hit (h) or pass (p)? ";
            std::cin >> choice;

        if (choice == 'h')
            {
                my_player.hit_me(my_deck.pull_card());
                p_score += my_deck.pull_card();
            }
            else if (choice == 'p')
                {
                    // Dealer's turn
                            my_dealer.bank_it(my_deck.pull_card());
                            d_score += my_deck.pull_card();
                            if (d_score > p_score && d_score < goal)
                            {
                                std::cout << my_player.get_name() << ": " << p_score << ": " << my_dealer.get_name() << ": " << d_score << " Dealer Win! " << std::endl;
                                return 0;
                            }
                            else (p_score > d_score && p_score < goal);
                            {
                                std::cout << my_player.get_name() << ": " << p_score << ": " << my_dealer.get_name() << ": " << d_score << " Player win! " << std::endl;
                                return 0;
                            }
                }
            }
        }
    return 0;
}





