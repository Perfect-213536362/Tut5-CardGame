#pragma once
#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H


#include "Card.h"
class DeckOfCards :
	public Card
{
public:
	DeckOfCards();
	~DeckOfCards();
	void reset();
	void shuffle();
	void draw();
	void peek();
	int numberOfCards();

};

#endif

