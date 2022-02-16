
#include "Deck.h"
#include <string>
#include <iostream>

using namespace std;

Deck::Deck() {
    char  T_rank;
    char  T_suit;
    cout << "Initiating Deck...";
    for (int i= 0; i< 4; i++) {
        for (int j = 1; j <= 13; j++) {
            switch (i) { // gives suit value to Card.
                case 0:
                    T_suit = 'S'; // Spade
                    break;
                case 1:
                    T_suit = 'H'; // Heart
                    break;
                case 2:
                    T_suit = 'D'; // Diamond
                    break;
                case 3:
                    T_suit = 'C'; // CLover
                    break;
            }
            switch (j) { // gives Number Value to card
                case 1:
                    T_rank = 'A'; // ACE
                    break;
                case 11:
                    T_rank = 'J'; // JACK
                    break;
                case 12:
                    T_rank = 'Q'; // QUEEN
                    break;
                case 13:
                    T_rank = 'K'; // KING
                    break;
                case 10:
                    T_rank = 't'; // 10
                    break;
                default:
                    T_rank = j + '0'; // NUMBER VALUES INTO CHAR
            }
            this->Stack[size].setCard(T_rank,  T_suit);
            //Stack[size].display();
            //cout << "Size: " << size << "\t Deck Size: "<< sizeof(Deck) << endl;
            this->size++;
        }
    }
    cout << " OK\n";
}
void Deck::display(){
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~ Deck ~~~~~~~~~~~~~~~~~~~~~~"<< endl;
    for (int i = 0; i < 13; ++i) { // displays first 13 cards
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
    for (int i = 39; i < 52; ++i) {
        Stack[i].display();
    }
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
}
void Deck::shuffle()
{
    cout << "\nDeck Shuffling...";
    srand(time(0));
    for (int i = 0; i < rand(); ++i) {
        int alpine = rand() % 52;
        int cavern = rand() % 52;
        Card copy = Stack[alpine];

        Stack[alpine] = Stack[cavern];
        Stack[cavern] = copy;
    }
    cout << " OK\n";
}
Card Deck::deal(){
    Card topCard = Stack[top++];
    //top_card.display();
    //cout << "Top: " << top << endl;
    return topCard;
}
bool Deck::isempty() {
    if (top == 52){
        //cout << "Isempty";
        return true;
    }
}
void Deck::refreshDeck() {
    cout << "Deck Refreshing...\n";
    *this = {};
    cout << endl;
}