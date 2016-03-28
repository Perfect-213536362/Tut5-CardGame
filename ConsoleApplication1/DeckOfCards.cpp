#include <iostream>
#include <string>
#include<cstdlib>
#include "DeckOfCards.h"
#include "Card.h"

using namespace std;
class DeckOfCards
{
private:
	void free();
	void Switch(Card*, Card*);
	int CardNum = 0;
	int Cards;

public:

	DeckOfCards::DeckOfCards()
	{
		reset();
	}


	DeckOfCards::~DeckOfCards()
	{

	}
	void reset()
	{
		CardNum = 20;

	}


	void shuffle()
	{
		if (CardNum > 0)
		{
			int i;
			for (i = 0; i < 50; ++i)
			{
				switch (Cards[rand()% CardNum + 1], Cards[rand() % 6 + 1])
			
			}

		}
	}
	Card draw()
	{
		Card temp = peek();
		delete Cards[CardNum - 1];
		--CardNum;
		return temp;
	}
	Card peek()
	{
		return *Cards[CardNum - 1];
	}
	int numberOfCards()
	{
		return CardNum;
	}

	void DeckOfCards::Switch(Card *card1, Card *card2)
	 {
		 Card Hold = *card1;
		*card1 = *card2;
		*card2 = Hold;
	 }

	void DeckOfCards::free()
		{
		 	int i;
		 	for (i = 0; i < 20; ++i)
				delete Cards[i];
		}

	DeckOfCards::~DeckOfCards()
	     {
			free();
		 }

};