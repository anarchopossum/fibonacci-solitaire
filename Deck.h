//
// Created by Jasmine San Juan on 2/3/22.
//





#ifndef FIBSOLI_DECK_H
#define FIBSOLI_DECK_H

#include "Card.h"
#include <string>

using namespace std;

class Deck
{
private:

public:
    Deck();
    Deck(Card c[]);
    void display();
    Card * create(Card c[]);
    Card deal();
};

#endif //FIBSOLI_DECK_H
