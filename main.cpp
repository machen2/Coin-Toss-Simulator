#include "Coin.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Coin coin1; // define a coin object
	int heads = 0;
	int tails = 0;
	string result = coin1.getSideUp();

	cout << "Welcome to the Coin Toss Simultor!\n\nThis program will toss a coin 20 times and tally the amount of \n";
	cout << "times the coin lands on 'heads' and 'tails'.\n\n";
	cout << "The side that is currently facing up is " << result << ".\n\n";
	
	for(int i = 0; i < 20; i++)
	{
		coin1.toss();
		result = coin1.getSideUp();

		cout << "Coin Toss Number " << i + 1 << ": " << result << "." << endl;

		if (result == "heads")
			{ heads++;}
		else
			{ tails++;}
	}

	cout << endl << "RESULTS: " << endl << "Heads was tossed " << heads << " times." << endl;
	cout << "Tails was tossed " << tails << " times." << endl << endl;

	return 0;
}