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
    if (Rank == 't'){
        cout << "10" << Suite << "\t";
    }else {
        cout << Rank << Suite << "\t";
    }
}
void Card::setCard(char r, char s)
{
    int Val;
    switch (r) {
        case 'A':
            Val = 1; //Ace
            break;
        case '2':
            Val = 2;
            break;
        case '3':
            Val = 3;
            break;
        case '4':
            Val = 4;
            break;
        case '5':
            Val = 5;
            break;
        case '6':
            Val = 6;
            break;
        case '7':
            Val = 7;
            break;
        case '8':
            Val = 8;
            break;
        case '9':
            Val = 9;
            break;
        case 't':
            Val = 10;
            break;
        case 'J':
            Val = 10; //Jack
            break;
        case 'Q':
            Val = 10; //Queen
            break;
        case 'K':
            Val = 10; //King
            break;
    }
}
int Card::getValue()
{

}
