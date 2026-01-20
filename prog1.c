#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>

int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	// Defining a myrand var with a rand num from 0 to 10
	srand(time(NULL));
	int myrand = rand() % 11;
	// TODO Complete the program
	// Outputs eat more beef if num is 0 to 4
	if(myrand <= 4 && myrand >= 0){
		printf("Eat more beef, kick less cats\n");
		// Outputs Frodo lives if num is 5 to 9
	}else if(myrand <= 9 && myrand > 4){
		printf("FRODO LIVES\n");
		// Output larn if num is 10
	}else if(myrand == 10){
		printf("Larn is the best roguelike\n");
	}
	// Outputs the num
	printf("The random number was: %d\n", myrand);
}
