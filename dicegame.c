#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// 3 dice 6 sides
// sum of all 3 dices is calculated
// if sum is greater or = 13 on 1sr roll player wins
// if sum is less than or = 6 on 1st roll the player loses
// if the sum is 7,8,9,10,11 or 12 on 1st roll then that sum becomes the goal
// to win must contine to roll the dice untill goal is met 
// you loose if you roll a sum which is > or = to 15 before making goal

void roll(int point)
{
	
	int dice_total;
	int die1;
	int die2;
	int die3;
	
	
	while(dice_total!=point)
	{
		die1 = rand()%6+1;
		die2 = rand()%6+1;
		die3 = rand()%6+1;
		dice_total=(die1+die2+die3);
		printf("You are now rolling to get your point! You roll %d + %d + %d = %d\n", die1, die2, die3, dice_total);
			if(dice_total == point)
			{
				printf("You rolled and got your point! You Win!\n");
				break;
			}
			if (dice_total >= 15)
			{
				printf("You rolled a 15 or higher you lose :(\n");
				break;
			}
			if(dice_total != 15 && dice_total != point)
			{
				printf("You have not rolled your point you get to roll again\n");
			}
	}
	
	
}






int main()
{
 int die1;
 int die2;
 int die3;
 srand(time(NULL));
 die1 = rand()%6+1;
 die2 = rand()%6+1;
 die3 = rand()%6+1;
 int dice_total;
 int second_dice_total;
 dice_total=(die1+die2+die3); 
 int sum_goal;
 
 printf("Hello and Welcome to the Dice Roll game! Here are the rules:\n");
 printf("1. If the sum is greater or equal to 13 on 1st roll then you win!\n");
 printf("2. If sum is less than or equal to 6 on 1st roll the you lose :(\n");
 printf("3. If the sum is 7,8,9,10,11 or 12 on 1st roll then that sum becomes the goal!\n");
 printf("4. To win must contine to roll the dice untill goal is met!\n");
 printf("5. You lose if you roll a sum which is > or = to 15 before making goal!\n");
 
 
 
 
 printf("Player rolls 3 dice they are %d + %d + %d = %d\n", die1, die2, die3, dice_total);

 if(dice_total >= 13)
 {
 printf("You win!");

 }
 else 
 {
 }
 if(dice_total <= 6)
 {
 printf("You lose");
 
 }
 else
 {
 }
 
 switch(dice_total)
 {
	 case 7:
	 sum_goal =7;
	 printf("Your point is now %d\n", sum_goal);
	 printf("You now have to reach this point!\n");
	 roll(sum_goal);
	 break;
	 
	 case 8:
	 sum_goal = 8;
	 printf("Your point is now %d\n", sum_goal);
	 printf("You now have to reach this point!\n");
	 roll(sum_goal);
	 break;
	 
	 case 9:
	 sum_goal=9;
	 printf("Your point is now %d\n", sum_goal);
	 printf("You now have to reach this point!\n");
	 roll(sum_goal);
	 break;
	 
	 case 10:
	 sum_goal=10;
	 printf("Your point is now %d\n", sum_goal);
	 printf("You now have to reach this point!\n");
	 roll(sum_goal);
	 break;
	 
	 case 11:
	 sum_goal=11;
	 printf("Your point is now %d\n", sum_goal);
	 printf("You now have to reach this point!\n");
	 roll(sum_goal);
	 break;
	 
	 case 12:
	 sum_goal=12;
	 printf("Your point is now %d\n", sum_goal);
	 printf("You now have to reach this point!\n");
	 roll(sum_goal);
	 break;
 }
	
 return 0; 
 
}