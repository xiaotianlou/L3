#include <stdio.h>

int main () {
	printf("Welcome to Terminal Chess!\n");
	printf("Initializing Board...")	;
	int board[8][8] = { {5, 4, 3, 2, 1, 3, 4, 5}
				 , {6, 6, 6, 6, 6, 6, 6, 6}
				 , {0, 0, 0, 0, 0, 0, 0, 0}
				 , {0, 0, 0, 0, 0, 0, 0, 0}
				 , {0, 0, 0, 0, 0, 0, 0, 0}
				 , {0, 0, 0, 0, 0, 0, 0, 0} 
				 , {0, 0, 0, 0, 0, 0, 0, 0}
				 , {6, 6, 6, 6, 6, 6, 6, 6}
				 , {5, 4, 3, 2, 1, 3, 4, 5}
				 } ;
	
	printf("Board Initialized!");
	
	// rest of game...
	
	printf("Terminating...");
}
