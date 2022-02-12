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


int main() {
    int top;
    //Card c1('A','D');
    //c1.display() << endl;
    Deck d1;
    d1.display();
    d1.shuffle();
    d1.display();
    cout << d1.isEmpty();
    return 0;
}