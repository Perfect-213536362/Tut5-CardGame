#pragma once
#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include<cstdlib>

#include "Card.h"
class DeckOfCards :
	public Card
{
private:
	void free();
	void Switch(Card*, Card*);
		int CardNum = 0;
		int Cards;
public:
	DeckOfCards();
	~DeckOfCards();
	void reset();
	void shuffle();
	Card draw();
	Card peek();
	int numberOfCards();

};

#endif

