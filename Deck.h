
#ifndef FIBSOL2_DECK_H
#define FIBSOL2_DECK_H
#include "Card.h"
#include <string>

using namespace std;

class Deck{
private:
    int size = 0;
    int top =0;
    Card Stack[52];
public:
    Deck();
    void refreshDeck();
    Card deal();
    void shuffle();
    bool isempty();
    void display();
};
#endif //FIBSOL2_DECK_H
