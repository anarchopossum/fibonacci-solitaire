//
// Created by Jasmine San Juan on 2/3/22.
//

#ifndef FIBSOLI_CARD_H
#define FIBSOLI_CARD_H

#include <string>

using namespace std;

class Card
{
private: // Attributes go here
    char Suite;
    char Rank;
public:
    Card();
    Card(char r, char s);
    void display();
    void setCard(char r, char s);
    int getValue(char r, char s);
};

#endif //FIBSOLI_CARD_H
