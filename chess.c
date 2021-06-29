#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isValidMove (int x1, int x2, int y1, int y2) ;

int main () {
	printf("Welcome to Terminal Chess!\n");
	printf("Initializing Board...\n")	;
	int board [8][8] = { {5, 4, 3, 1, 2, 3, 4, 5}
		           , {6, 6, 6, 6, 6, 6, 6, 6}
				 	     , {0, 0, 0, 0, 0, 0, 0, 0}
					     , {0, 0, 0, 0, 0, 0, 0, 0}
				             , {0, 0, 0, 0, 0, 0, 0, 0} 
				             , {0, 0, 0, 0, 0, 0, 0, 0}
				             , {6, 6, 6, 6, 6, 6, 6, 6}
				             , {5, 4, 3, 1, 2, 3, 4, 5}
				             } ;
  char buf[100];
  bool whitesMove = true;
	printf("Board Initialized!\n") ;
	
// 	showBoard(board);

  printf("Enter `q` to quit at any time.\n");
  printf("Moves are entered as co-ordinate pairs, such as \"13-33\" \n");
  do {
    if (whitesMove) {
      printf("White to move.\n");
    } else {
      printf("Black to move.\n");
    }
    printf("♔ >> ");
    scanf("%s", buf);
  } while (buf[0] != 'q' && buf[0] != 'Q') ;
    
	printf("Terminating...\n") ;
}

bool isValidMove (int x1, int x2, int y1, int y2, int board[8][8]) {
	if (board[x1][y2] == 0) {
		return false;
	} else if (board[x1][y2] == 1) { 
		if (abs(x1 - x2) <= 1 and abs(y1-y2) <= 1) {
			return true;
		}
		// king
	} else if (board[x1][y2] == 2) { 
		// queen
	} else if (board[x1][y2] == 3) { 
		// bishop
	} else if (board[x1][x2] == 4) { // knight
		if (abs(x1 - x2) == 1) {
			if (abs(y2 - y1) == 2) {
				return true;
			}
		} else if (abs(x1 - x2) == 2) {
			if (abs(y2 - y1) == 1) {
				return true;
			}
		}
		
	} else if (board[x1][y2] == 5) { 
		// Rook
	} else if (board[x1][x2] == 6) { // Pawn
		if (y1 - y2 == 1 && x1 == x2) { // forward one
			if (board[x1][y2] == 0) {
				return true;
			}
		} else if (y1 - y2 == 2 && x1 == x2) { // forward two
			if (board[x1][y2] == 0 && board[x1][y2+1] == 0) {
				return true;
			}
		} else if (abs(x1 - x2) == 1 && y1-y2 == 1) { // capture left or right
			if (board[x2][y2] != 0) {
				return true;
			}
		}
		return false;
	}
}
