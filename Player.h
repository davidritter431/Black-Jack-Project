#ifndef PLAYER_H
#define PLAYER_H
class player
{
    private:
        std::string player_name;
        int bank;
        
    public:
        player (void);
        player (std::string);//set up player
        void hit_me (int);//adds value to bank
        int get_bank(void);//get current value from bank
        std::string get_name(void);//get name
};

#endif
