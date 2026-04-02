#include <stdio.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Dealer.h"

dealer::dealer(void)
{
    dealer_name = "dealer";
    bank = 0;
}

dealer::dealer(std::string D)
{
    dealer_name = "dealer";
    bank = 0;
}
void dealer::bank_it(int add_it)
{
    bank = bank + add_it;
}

int dealer::get_bank(void)
{
    return bank;
}



std::string dealer::get_name(void)
{
    return dealer_name;
}
