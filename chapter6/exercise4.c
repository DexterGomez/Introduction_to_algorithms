/*
Given an amount of money (less than $1.00),
compute the number of quarters, dimes, 
nickels, and pennies needed.
*/

#include <stdio.h>

int main(){
	
	float money;
	
	printf("Introduce the amount of money needed: ");
	scanf("%f",&money);
	
	int quarters = 0; //$0.25 USD
	int dimes = 0; //0.10 USD
	int nickels = 0; //0.05 USD
	int pennies = 0; //0.01 USD
	
	while(money >= 0.25){
		money = money - 0.25;
		quarters++;
	}
	
	while(money >= 0.10){
		money = money - 0.10;
		dimes++;
	}
	
	while(money >= 0.05){
		money = money - 0.05;
		nickels++;
	}
	
	while(money >= 0.01){
		money = money - 0.01;
		pennies++;
	}
	
	printf("To transform this amount in coins is necessary...\n%d quarters.\n%d dimes.\n%d nickels.\n%d pennies\n",quarters,dimes,nickels,pennies);
	
	return 0;
}
