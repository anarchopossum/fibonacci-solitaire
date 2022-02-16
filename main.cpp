
#include "Card.h"
#include "Deck.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    int ans;
    Deck d1;
    do {
        cout << "\n==============================\n";
        cout << "Welcome to fibonacci Solitaire\n";
        cout << "==============================\n\n";
        cout << "1. NewDeck\n2. Display Deck\n3. Shuffle Deck\n4. Play Game\n5. Exit\n\nEnter a number Value: ";

        cin >> ans;
        switch (ans) {
            case 1:
                d1.refreshDeck();
                cout << "\n\nDeck Created\n";
                break;
            case 2:
                d1.display();
                cout << "\n\n";
                break;
            case 3:
                d1.shuffle();
                //cout << "\n\nDeck Shuffled\n\n";
                break;
            case 4:
                Card hand;
                int sum = 0;
                int FibNum[] = {1,2,3,5,8,13,21,34,55,89,144,233,377};

                d1.shuffle();
                //cout << "Shuffling Deck..."<< endl;
                while (!d1.isempty()){
                    hand = d1.deal(); // draws the card
                    hand.display();
                    sum += hand.getValue();
                    for (int i = 0; i < 12; ++i) {
                        if (sum == FibNum[i]){
                            cout << "\nWin!" << endl << "Sum: "<< sum << " matches with fibonacci Number: " << FibNum[i] <<endl;
                            sum = 0;
                            if (d1.isempty()){
                                cout << "You won the game! Last value is part of a Fibonacci Sequence!"<< endl;
                            }
                            break;
                        }
                        if(sum != FibNum[i] && d1.isempty()){
                            cout << "\nHow unfortunate, You lost this round, Try Again."<<endl;
                            break;
                        }
                    }
                }
                cout<<endl<<endl;
                d1.refreshDeck();
                break;
        }
    }while (ans !=5);
/*
 * Debug
    Card c1('a','S');
    c1.display();
    cout << c1.getValue()<<endl;
    c1.setCard('2','S');
    c1.display();
    cout << c1.getValue()<<endl;
    Deck d1;
    d1.display();
    d1.shuffle();
    d1.display();
    for (int i = 0; i < 52; ++i) {
        d1.deal();
        d1.isempty();
    }
    d1.display();
    d1.refreshDeck();
    d1.display();
*/
    return 0;
}
