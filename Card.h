
#ifndef FIBSOL2_CARD_H
#define FIBSOL2_CARD_H



class Card{
private:
    char Suit;
    char Rank;
public:
    Card();
    Card(char r, char s);
    void display();
    void setCard(char r, char s);
    int getValue();
};
#endif //FIBSOL2_CARD_H