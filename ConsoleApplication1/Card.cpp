#include <iostream>
#include <string>

using namespace std;

class Card
{
private:
	int numbr = 0;
	string colour = " ";
public:
	int Cards[20];
    Card::Card()

	{
		int num;
		string col;

		if (num > 0 && num < 10 && col == "red" || col =="black")
		{
			numbr = num;
			colour = col;
		}
		
	}

	Card::~Card()
	{
	}

   string Card::Colour()
   {
	   return colour;
	
	}
	int Card::number()
	{
		return numbr;
    }

	void Card::print()
	{
		cout << Colour() << " " << number() << endl;
	}
};