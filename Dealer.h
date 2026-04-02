#ifndef DEALER_H
#define DEALER_H

class dealer
{
    private:
        std::string dealer_name;
        int bank;
        
    public:
        dealer (void);
        dealer (std::string);//set up dealer
        void bank_it(int);//adds value to bank
        int get_bank(void);//gets current value from bank
        std::string get_name(void);//get name
        
};

#endif
