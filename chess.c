#include <stdio.h>


// ♔ ♕ ♖ ♗ ♘ ♙
void showBoard (int board[8][8]) {
	printf("\n\n  01234567\n");
	for (int i = 0; i < 8; i++) {
		printf("%d ", i); 
		for (int j = 0; j < 8; j++) {
			if (board[i][j] == 0) {
				printf(" ");
			} else if (board[i][j] == 1) {
				printf("♔");
 			} else if (board[i][j] == 2) {
				printf("♕");
			} else if (board[i][j] == 3) {
				printf("♗");
			} else if (board[i][j] == 4) {
				printf("♘");
			} else if (board[i][j] == 5) {
				printf("♖");
			} else if (board[i][j] == 6) {
				printf("♙");
			}
		}
		printf("\n");
	}
}

int main () {
	printf("Welcome to Terminal Chess!\n");
	printf("Initializing Board...")	;
	int board [8][8]  = { {5, 4, 3, 1, 2, 3, 4, 5}
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
	
	printf("Terminating...");
	
}

