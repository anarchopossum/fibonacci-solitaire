//
// Created by Jasmine San Juan on 2/3/22.
//
#include "Card.h"
#include <iostream>

using namespace std;

Card::Card()= default;

Card::Card(string r, string s)
{
    Rank = r;
    Suite = s;
}
void Card::display()
{
    cout << "Rank: " << Rank << " | Suite: " << Suite;
}