//
// Created by Jasmine San Juan on 2/3/22.
//
#include "Card.h"
#include <iostream>

using namespace std;

Card::Card()= default;

Card::Card(char r, char s)
{
    Rank = r;
    Suite = s;
}
void Card::display()
{
    if (Rank == 't') {
        cout << "10" << Suite << endl;
    }else {
        cout << Rank << Suite << endl;
    }
}