/**
 * Name: Jasmine San Juan
 * Class: CECS 282-04
 * Project Name: Prog 1 - Solitaire Prime
 * Due Date: February 15, 2022
 */


#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

void play() {}

int main() {
    int top;
    Deck d1;

    int user;
    while (user != 5) {
        cout << "\nWelcome to Fibonacci Solitaire!\n\n";
        cout << "1. NewDeck\n2. Display Deck\n3. Shuffle Deck\n4. Play Game\n5.Exit\n\nEnter a number Value: ";
        cin >> user;

        switch (user) {
            case 1:
                d1.refreshDeck();
                cout << "\n\nDeck Created\n";
                break;
            case 2:
                d1.display();
                cout<< "\n\n";

                break;
            case 3:
                d1.shuffle();
                cout<< "\n\nDeck Shuffled\n\n";
                break;
            case 4:
                play();
                break;
            case 5:
                return 0;
                break;
        }
    }
    return 0;
}// todo: implement game