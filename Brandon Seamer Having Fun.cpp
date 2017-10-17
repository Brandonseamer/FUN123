/********************************************
    Name: Brandon Seamer
    Date: October 14th, 2017
    Program Name: homework4.cpp
    Program Description:
********************************************/

#include <iostream>
#include <cstdlib>  //Need for srand and rand functions
#include <ctime>    //Need for time function

using namespace std;

void rolldice(int);
void reroll(int &num1, int &num2, int &num3);
void showdice(double, double, double);
double score(double, double, double, double);

int main()
{
    double player1score = 0;
    double player2score = 0;
    double i = 1;
    double rounds = 3;
    string input;

    for (i = 1; i <= rounds; i++)
    {
		cout << "It is Player 1's turn. Are you ready? Enter Y to roll" << endl;
		cin >> input;
        
    	if (input == "Y")
    	{
    		srand(time(0)); // seed random-numer generator with current time

			int player1num1 = rand() % 6+1;
			int player1num2 = rand() % 6+1;
			int player1num3 = rand() % 6+1;

			showdice(player1num1, player1num2, player1num3);

			reroll(player1num1, player1num2, player1num3);

			player1score = score(player1num1, player1num2, player1num3, player1score);
		}

		cout << "It is Player 2's turn. Are you ready? Enter Y to roll" << endl;
		cin >> input;

    	if (input == "Y")
    	{
    		srand(time(0)); // seed random-numer generator with current time

			int player2num1 = rand() % 6+1;
			int player2num2 = rand() % 6+1;
			int player2num3 = rand() % 6+1;

			showdice(player2num1, player2num2, player2num3);

			reroll(player2num1, player2num2, player2num3);

			player2score = score(player2num1, player2num2, player2num3, player2score);
		}
    }

    if (player1score > player2score)
    {
    	cout << "Player 1 is the winner!" << endl;
    }
    else if (player2score > player1score)
    {
    	cout << "Player 2 is the winner!" << endl;
    }
    else
    {
    	cout << "It's a tie!" << endl;
    }

    return 0;
}



/************************************************************
    Function name: power
    Description: This function computes the of the input number to a power
    Input: num as double, npower as double
    Output: the given power of the input number as a double
*************************************************************/

void rolldice(int dicenumber)
{

    if (dicenumber == 1)
    {
    	cout << "  -------  " << endl;
    	cout << " |       | " << endl;
    	cout << " |   *   | " << endl;
    	cout << " |       | " << endl;
    	cout << "  -------  " << endl;
    }

    if (dicenumber == 2)
    {
    	cout << "  -------  " << endl;
    	cout << " |       | " << endl;
    	cout << " | *   * | " << endl;
    	cout << " |       | " << endl;
    	cout << "  -------  " << endl;
    }
 
    if (dicenumber == 3)
    {
    	cout << "  -------  " << endl;
    	cout << " | *     | " << endl;
    	cout << " |   *   | " << endl;
    	cout << " |     * | " << endl;
    	cout << "  -------  " << endl;
    }

    if (dicenumber == 4)
    {
    	cout << "  -------  " << endl;
    	cout << " | *   * | " << endl;
    	cout << " |       | " << endl;
    	cout << " | *   * | " << endl;
    	cout << "  -------  " << endl;
    }

    if (dicenumber == 5)
    {
    	cout << "  -------  " << endl;
    	cout << " | *   * | " << endl;
    	cout << " |   *   | " << endl;
    	cout << " | *   * | " << endl;
    	cout << "  -------  " << endl;
    }

    if (dicenumber == 6)
    {
    	cout << "  -------  " << endl;
    	cout << " | *   * | " << endl;
    	cout << " | *   * | " << endl;
    	cout << " | *   * | " << endl;
    	cout << "  -------  " << endl;
    }
}




/************************************************************
    Function name: power
    Description: This function computes the of the input number to a power
    Input: num as double, npower as double
    Output: the given power of the input number as a double
*************************************************************/
void reroll(int &num1, int &num2, int &num3)
	{
		double reroll, diceToReroll, dieToReroll1, dieToReroll2;
		cout << "If you would like to reroll, enter how many dice you would like to reroll. Enter 0 to not reroll any" << endl;
    	cin >> reroll;
    	if (reroll == 1)
    	{
    		cout << "Which dice would you like to reroll? Enter 1, 2, or 3" << endl;
   			cin >> diceToReroll;
   			if (diceToReroll == 1)
   			{
   				num1 = rand() % 6+1;

   				showdice(num1, num2, num3);
    		}
            
    		if (diceToReroll == 2)
   			{
   				num2 = rand() % 6+1;

   				showdice(num1, num2, num3);

    		}
            
    		if (diceToReroll == 3)
    		{
    			num3 = rand() % 6+1;
   				
   				showdice(num1, num2, num3);
   			}
   		}
    	if (reroll == 2)
    	{
    		cout << "Which die would you like to reroll? Enter 2 numbers that are 1, 2, or 3 separated by a space" << endl;
   			cin >> dieToReroll1 >> dieToReroll2;
   			if ((dieToReroll1 == 1 || dieToReroll2 == 1) && (dieToReroll1 == 2 || dieToReroll2 == 2))
   			{
    			num1 = rand() % 6+1;
    			num2 = rand() % 6+1;

   				showdice(num1, num2, num3);
    		}
    		if ((dieToReroll1 == 1 || dieToReroll2 == 1) && (dieToReroll1 == 3 || dieToReroll2 == 3))
    		{
    			num1 = rand() % 6+1;
    			num3 = rand() % 6+1;

    			showdice(num1, num2, num3);
    		}
    		if ((dieToReroll1 == 3 || dieToReroll2 == 3) && (dieToReroll1 == 2 || dieToReroll2 == 2))
    		{
    			num2 = rand() % 6+1;
    			num3 = rand() % 6+1;

    			showdice(num1, num2, num3);
    		}
    	}
    	if (reroll == 3)
    	{
    		num1 = rand() % 6+1;
    		num2 = rand() % 6+1;
    		num3 = rand() % 6+1;

			showdice(num1, num2, num3);
    	}
    }



/************************************************************
    Function name: power
    Description: This function computes the of the input number to a power
    Input: num as double, npower as double
    Output: the given power of the input number as a double
*************************************************************/

void showdice(double num1, double num2, double num3)
{
	rolldice(num1);
	rolldice(num2);
	rolldice(num3);
}



/************************************************************
    Function name: power
    Description: This function computes the of the input number to a power
    Input: num as double, npower as double
    Output: the given power of the input number as a double
*************************************************************/

double score(double num1, double num2, double num3, double score)
{
	double rollscore;
	if (num1 == num2 && num2 == num3)
	{
		rollscore = 20 + num1;
        score = score + rollscore;
		cout << "Your score for the roll is " << rollscore << endl;
	}
    else if (num1 == num2 || num1 == num3 || num2 == num3)
	{
		if (num1 == num2)
		{
			
			rollscore = 10 + num1;
			score = score + rollscore;
			cout << "Your score for the roll is " << rollscore << endl;			
		}
		else if (num1 == num3)
		{
			rollscore = 10 + num1;
			score = score + rollscore;
			cout << "Your score for the roll is " << rollscore << endl;
		}
		else if (num2 == num3)
		{
			rollscore = 10 + num2;
			score = score + rollscore;
			cout << "Your score for the roll is " << rollscore << endl;
		}
	}

	else if (num1 != num2 && num1 != num3 && num2 != num3)
	{
		if (num1 > num2 && num2 > num3)
		{
			rollscore = num1;
			score = score + rollscore;
			cout << "Your score for the roll is " << rollscore << endl;
		}
		else if (num2 > num1 && num1 > num3)
		{
			rollscore = num2;
			score = score + rollscore;
			cout << "Your score for the roll is " << rollscore << endl;			
		}
		else if (num3 > num2 && num2 > num1)
		{
			rollscore = num3;
			score = score + rollscore;
			cout << "Your score for the roll is " << rollscore << endl;			
		}
	}

	cout << "Your current score is " << score << endl;

	return score;
}
