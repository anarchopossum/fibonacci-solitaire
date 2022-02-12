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
    Card Stack[26];
public:
    Deck();
    void display();
    Card deal();
    void shuffle();
    bool isEmpty();
    void refreshDeck();
};

#endif //FIBSOLI_DECK_H
