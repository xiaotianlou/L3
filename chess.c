#include <stdio.h>


// ♔ ♕ ♖ ♗ ♘ ♙
void showBoard (int board[8][8]) {
	printf("\n\n");
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			switch (board[i][j]) {
				case 0: 
					printf(" ");
					break;
				case 1:
					printf("♔");
					break;
				case 2: 
					printf("♕");
					break;
				case 3: 
					printf("♗");
					break;
				case 4: 
					printf("♘");
					break;
				case 5: 
					printf("♙");
			}
		}
		printf("\n") ;
	}
}

int main () {
	printf("Welcome to Terminal Chess!\n");
	printf("Initializing Board...")	;
	int board [8][8] = { {5, 4, 3, 1, 2, 3, 4, 5}
				       , {6, 6, 6, 6, 6, 6, 6, 6}
				 	   , {0, 0, 0, 0, 0, 0, 0, 0}
					   , {0, 0, 0, 0, 0, 0, 0, 0}
				       , {0, 0, 0, 0, 0, 0, 0, 0} 
				       , {0, 0, 0, 0, 0, 0, 0, 0}
				       , {6, 6, 6, 6, 6, 6, 6, 6}
				       , {5, 4, 3, 1, 2, 3, 4, 5}
				       } ;
	printf("Board Initialized!") ;
	
	showBoard(board);
	
	// rest of game...
	
	printf("Terminating...") ;
}
