#pragma once
#ifndef CARD_H
#define CARD_H
class Card
{
private:
	int numbr = 0;
	string Colour = " ";

public:
	Card(int, string);
	~Card();
	bool Card::Colour();
	int Card::number();
	void Card::print();
};
#endif