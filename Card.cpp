
#include "Card.h"
#include <string>
#include <iostream>

using namespace std;

Card::Card() {}

Card::Card(char r,char s){
    Rank = r;
    Suit = s;
}
void Card::display() {
    string symbol;
    switch (Suit) {
        case 'S':
            symbol = "\u2660";//Spades
            break;
        case 'H':
            symbol = "\u2661"; //Heart
            break;
        case 'D':
            symbol = "\u25C7"; //Diamond
            break;
        case 'C':
            symbol = "\u2618"; //Clubs
            break;
    }

    if (Rank == 't'){
        cout << "10" << symbol << "\t";
    }else {
        cout << Rank << symbol << "\t";
    }
}

int Card::getValue()
{
    int Val;
    switch (Rank) {
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
    return Val;
}

void Card::setCard(char r, char s) {
    Rank = r;
    Suit = s;
}