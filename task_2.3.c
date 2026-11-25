#include<stdio.h>
int main()
{
	int secret = 42;
	int guess = 0;
	printf("Guess the secret number: ");
	scanf("%d",&guess);
	if (guess>42)
	{
		printf("Your guess is too high!\n");
	}
	else if(guess<42)
	{
		printf("Your guess is too low!\n");
	}
	else 
	{
		printf("You guessed it! The secret was %d.\n",secret);
	}
	return 0;
}
