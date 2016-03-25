#include <iostream>
#include<string>


class Card
{
private:
	
public:
	int Cards[20];
    Card::Card()
	{
		
	}

	Card::~Card()
	{
	}

   bool Card::Colour()
	{
		
		int i;
		for (i = 0, i <= 20, i++)
		{
			if ( Cards[i] <= 10 )
			return red;
			else 
			return black;
			
		}
	}
	int Card::number()
	{
		int i;
		for (i = 0, i <= 20, i++)
		{

		}

	}

	void Card::print()
	{

	}
};