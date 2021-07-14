#include "std_lib_facilities.h"

int main()
{
	vector<string>hands = { "rock","scissors","paper" };

	string playerhand;
	string computerhand;

	cout << "This is the Rock, Paper, Scissors game, to play please input 'rock', 'scissors', 'paper'.\n";

	while (cin >> playerhand)
	{
		computerhand = hands[rand() % 3];

		if (playerhand == "rock")
		{
			if (computerhand == "rock")
			{
				cout << "Computer drafted rock.\n";
				cout << "That`s a draw!!\n";
			}
			else if (computerhand == "scissors")
			{
				cout << "Computer drafted scissors.\n";
				cout << "You`ve won!!!\n";
			}
			else
			{
				cout << "Computer drafted paper.\n";
				cout << "You`ve lost!!!\n";
			}
		}
		else if (playerhand == "scissors")
		{
			if (computerhand == "rock")
			{
				cout << "Computer drafted rock.\n";
				cout << "You`ve lost!!\n";
			}
			else if (computerhand == "scissors")
			{
				cout << "Computer drafted scissors.\n";
				cout << "That`s a draw!!!\n";
			}
			else
			{
				cout << "Computer drafted paper.\n";
				cout << "You`ve won!!!\n";
			}

		}
		else if (playerhand == "paper")
		{
			if (computerhand == "rock")
			{
				cout << "Computer drafted rock.\n";
				cout << "You`ve won!!\n";
			}
			else if (computerhand == "scissors")
			{
				cout << "Computer drafted scissors.\n";
				cout << "You`ve lost!!!\n";
			}
			else
			{
				cout << "Computer drafted paper.\n";
				cout << "That`s a draw!!!\n";
			}

		}
		else
		{
			cout << "That`s an invalid hand.\n";
			keep_window_open();
			return 1;
		}

		cout << "Please innput another hand.\n";
		
	}

	keep_window_open();
	return 0;

}