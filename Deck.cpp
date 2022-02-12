//
// Created by Jasmine San Juan on 2/3/22.
//
#include "Card.h"
#include "Deck.h"
#include <iostream>

using namespace std;

Deck::Deck()
{
    char symbol;
    char value;
    int loopCount =0;
    for (int i = 0; i < 4; ++i) { // Controls the Suit of the card
        for (int j = 1; j < 14; ++j) { // Controls the value of the card
            // gives the Suit to the Card
            switch (i) {
                case 0:
                    symbol = 'S'; //Spades
                    break;
                case 1:
                    symbol = 'H'; //Heart
                    break;
                case 2:
                    symbol = 'D'; //Diamond
                    break;
                case 3:
                    symbol = 'C'; //Clubs
            }
            // gives the number value to the card
            switch (j) {
                case 1:
                    value = 'A'; //Ace
                    break;
                case 2:
                    value = '2';
                    break;
                case 3:
                    value = '3';
                    break;
                case 4:
                    value = '4';
                    break;
                case 5:
                    value = '5';
                    break;
                case 6:
                    value = '6';
                    break;
                case 7:
                    value = '7';
                    break;
                case 8:
                    value = '8';
                    break;
                case 9:
                    value = '9';
                    break;
                case 10:
                    value = 't';
                    break;
                case 11:
                    value = 'J'; //Jack
                    break;
                case 12:
                    value = 'Q'; //Queen
                    break;
                case 13:
                    value = 'K'; //King
                    break;
            }
            Card c(value, symbol);
            //c.display();
            Stack[loopCount] = c;
            loopCount++;
        }
    }
}
void Deck::display()
{
    cout << "\n~~~~~~~~~~~~~~~~ Size of Deck: " << sizeof(Deck) <<" ~~~~~~~~~~~~~~~~"<< endl;
    for (int i = 0; i < 13; ++i) {
        Stack[i].display();
    }
    cout << endl;
    for (int i = 13; i < 26; ++i) {
        Stack[i].display();
    }
    cout << endl;
    for (int i = 26; i < 39; ++i) {
        Stack[i].display();
    }
    cout << endl;
    for (int i =39; i < 52; ++i) {
        Stack[i].display();
    }
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}
Card Deck::deal()
{ // todo: Figureout how to implement top.
    //return Stack[top++];
}
void Deck::shuffle()
{
    for (int i = 0; i < rand(); ++i) {
        int alpine = rand() % sizeof(Deck);
        int cavern = rand() % sizeof(Deck);
        Card copy = Stack[alpine];

        Stack[alpine] = Stack[cavern];
        Stack[cavern] = copy;
    }
}
bool Deck::isEmpty()
{ //todo: better implement the isempty()
    int size =sizeof(Deck);
    if (size == 0){
        return true;
    }else{
        return false;
    }
}
void Deck::refreshDeck()
{

}
