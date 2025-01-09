// libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// function prototypes
void game();
int diceroll();
int position_calculator(int roll, int board[]);
void check_winner();
void print_board();
void printer(int position);

// global variables
int turn = 0;
int winner = 0;
int positions[2] = {0, 0};
// board, 0 is empty, positive is ladder, negative is snake
int board[100] = {0};

int main()
{
	board[2] = 3;
	board[5] = 2;
	board[24] = -8;
	board[25] = 1;
	board[32] = -2;
	board[34] = -2;
	board[38] = 1;
	board[64] = -4;
	board[71] = 2;
	board[99] = -2;

	// seeding
	srand(time(0));

	// introduction
	printf("Welcome to Snake and Ladder!\n");
	printf("Player 1 will be represented by 'P1' and Player 2 will be represented by 'P2'.\n");

	// ask for game start
	printf("Press any key to start game.\nPress 0 to exit.\n");
	if(getchar() == '0')
		return 0;

	//gameplay loop	
	while (!winner)
		game();

	return 0;
}

int position_calculator(int roll, int board[])
{

	int position_after_roll = positions[turn] + roll;

	// check if player has reached goal with roll
	if (position_after_roll >= 100)
	{
		return 100;
	}

	// check if player has landed on snake or ladder
	if (board[position_after_roll] != 0)
	{
		printf("You landed on a snake or ladder!\n");
		printf("Your position will be adjusted by %d\n", board[position_after_roll]);
		getchar();
		position_after_roll += board[position_after_roll];
	}

	// return final position
	return position_after_roll;
}

int diceroll()
{
	return rand() % 6 + 1;
	;
}

void check_winner()
{
	if (positions[turn] == 100)
	{
		printf("Player %d wins!\n", turn + 1);
		winner = 1;
	}
}

void print_board()
{

	printf("\n");
	// iterators
	int counter_left_to_right = 101;
	int counter_right_to_left = 80;
	// to switch between the two iterators
	int alternate = 0;

	for (int i = 0; i < 100; i++)
	{
		// even printer if alternate is 0
		if (alternate == 0)
		{
			counter_left_to_right--;
			printer(counter_left_to_right);

			if (counter_left_to_right % 10 == 1)
			{

				printf("\n\n");
				alternate = 1;
				counter_left_to_right -= 10;
			}
		}
		// odd printer if alternate is 1
		else if (alternate == 1)
		{
			counter_right_to_left++;
			printer(counter_right_to_left);

			if (counter_right_to_left % 10 == 0)
			{
				printf("\n\n");
				alternate = 0;
				counter_right_to_left -= 30;
			}
		}
	}
}

void printer(int position)
{
	if (position == 100)
	{
		printf("  XX  ");
	}
	else if (positions[0] == position && positions[1] == position)
	{
		printf("  PP  ");
	}
	else if (positions[1] == position)
	{
		printf("  P2  ");
	}
	else if (positions[0] == position)
	{
		printf("  P1  ");
	}
	else if (board[position] != 0)
	{
		if (board[position] > 0)
		{
			printf("  L%d  ", board[position]);
		}
		else
		{
			printf("  S%d  ", board[position] * -1);
		}
	}
	else
	{
		printf("  %02d  ", position);
	}
}

void game()
{

	// gameplay
	while (!winner)
	{
		// turn variable
		printf("Player %d's turn.\n", turn + 1);

		// roll dice
		int roll = diceroll();
		printf("You rolled a %d.\n", roll);
		getchar();

		// snake and ladder with final position
		positions[turn] = position_calculator(roll, board);
		print_board();
		getchar();

		(turn == 1) ? (turn = 0) : (turn = 1);
		check_winner();
	}
	// ask for replay
	printf("Would you like to play again? Type y to play.\n");
	int respone = getchar();
	if (toupper(respone) == 'Y')
	{
		positions[0] = 0;
		positions[1] = 0;
		winner = 0;
	}
}
