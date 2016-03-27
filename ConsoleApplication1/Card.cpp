#include <iostream>
#include<string>


class Card
{
private:
	
public:
	int Cards[20];
    Card::Card()

	{
		int num;
		string col;

		if (num > 0 && num < 10, col == "red" || col == "black")
		{
			number = num;
			Colour = col;
		}
		
	}

	Card::~Card()
	{
	}

   bool Card::Colour()
   {
	   return Colour;
	
	}
	int Card::number()
	{
		return number;

	}

	void Card::print()
	{

	}
};