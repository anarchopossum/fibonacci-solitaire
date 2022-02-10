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
    Card stack[52];
    //Card c1('A','D');
    //c1.display();
    cout << endl;
    Deck d1;
    d1.create(stack);
    d1.display();
    return 0;
}