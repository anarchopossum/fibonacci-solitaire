
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
                int gamesWon=0;
                int FibNum[] = {1,2,3,5,8,13,21,34,55,89,144,233,377};

                d1.shuffle();

                while (!d1.isempty()){
                    hand = d1.deal(); // draws the card
                    hand.display();
                    sum += hand.getValue();
                    for (int i = 0; i < 12; ++i) {
                        if (sum == FibNum[i]){
                            cout << "\nWin!" << endl << "Sum: "<< sum << " matches with fibonacci Number: " << FibNum[i] <<endl;
                            gamesWon++;
                            sum = 0;
                            break;
                        }else if(d1.isempty() && gamesWon < 11){
                            cout << "\nHow unfortunate, You lost :(\nYou got "<<gamesWon<<"/11 matches won."<<endl;
                            break;
                        }else if (d1.isempty() && gamesWon >= 11){
                            cout << "You won the game! you got "<< gamesWon <<"/11 pairs!!"<< endl;
                        }
                    }
                }
                cout<<endl<<endl;
                d1.refreshDeck();
                break;
        }
    }while (ans !=5);
    return 0;
}
