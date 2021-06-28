#inlcude<stdio.h>

// ♔ ♕ ♖ ♗ ♘ ♙
void showBoard (int ** board) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			switch (board[i][j]) {
				case 0: 
					printf(" ");
				case 1:
					printf("♔");
				case 2: 
					printf("♕");
				case 3: 
					printf("♗");
				case 4: 
					printf("♘");
				case 5: 
					printf("♙");
			}
		}
		print("\n")
	}
}

int main () {
	printf("Welcome to Terminal Chess!\n");
	printf("Initializing Board...")	
	int [8][8] board = { {5, 4, 3, 1, 2, 3, 4, 5}
				       , {6, 6, 6, 6, 6, 6, 6, 6}
		 		 	     , {0, 0, 0, 0, 0, 0, 0, 0}
					     , {0, 0, 0, 0, 0, 0, 0, 0}
				 	     , {0, 0, 0, 0, 0, 0, 0, 0}
				       , {0, 0, 0, 0, 0, 0, 0, 0} 
				       , {0, 0, 0, 0, 0, 0, 0, 0}
				       , {6, 6, 6, 6, 6, 6, 6, 6}
				       , {5, 4, 3, 1, 2, 3, 4, 5}
				       }
	printf("Board Initialized!")
	
	showBoard(board);
	
	// rest of game...
	
	printf("Terminating...")
}
