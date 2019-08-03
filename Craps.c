/*Craps*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice();

main() {
	int gameStatus, sum, myPoint;
	srand(time(NULL));
	sum=rollDice(); //first roll of the dice
	switch(sum){
		case 7:
		case 11:
			gameStatus=1; //win on first roll
		break;
		case 2:
		case 3:
		case 12:
			gameStatus=2; //lose on first roll
		break;
		default:
			gameStatus=0;
			myPoint=sum;
			printf("Point is %d\n", myPoint);
	}
	
	while(gameStatus==0){
		sum=rollDice();
		if(sum==myPoint){
			gameStatus=1;
		}
		else{
			if (sum==7){
				gameStatus=2;
			}
		}
	}
	
	if(gameStatus==1){
		printf("Player wins\n");
	}
	else{
		printf("Player loses\n");
	}
	return 0;
}

int rollDice(){
	int die1, die2, workSum;
	die1=1+(rand() % 6);
	die2=1+(rand() % 6);
	workSum=die1+die2;
	printf("Player rolled %d +%d = %d\n", die1, die2, workSum);
	return workSum;
}
