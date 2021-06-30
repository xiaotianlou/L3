#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isValidMove (int x1, int x2, int y1, int y2, int board[8][8]) ;

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
	int xcheck = x1;
	int ycheck = y1;
	int piecesInWay = 0;
	if (board[x1][x2] == 0) {
		return false;
	} else if (board[x1][y2] == 1) { // king
		if (abs(x1 - x2) <= 1 && abs(y1-y2) <= 1) {
			return true;
		}
	} else if (board[x1][y2] == 2) { 
		// queen
	} else if (board[x1][y2] == 3) {  // bishop
		while (true) {
			xcheck += (x1 > x2)? -1 : 1;
			ycheck += (y1 > y2)? -1 : 1;
		 	if (xcheck < 0 || ycheck < 0 || xcheck > 7 || ycheck > 7) {
				break;
			}
			if (board[xcheck][ycheck] != 0) {
				piecesInWay += 1;
			} 
			if (piecesInWay == 2) {
				break;
			}
			if (xcheck == x2 && ycheck == y2) {
				return true;
			}
		}
	} else if (board[x1][y2] == 4) { 
		// knight
	} else if (board[x1][y2] == 5) { // Rook
		while (true) {
			if (y1 == y2) {
				xcheck += (x1 > x2)? -1 : 1;
			} else if (x1 == x2) {
				ycheck += (y1 > y2)? -1 : 1;
			} else {
				return false;
			}
			
		 	if (xcheck < 0 || ycheck < 0 || xcheck > 7 || ycheck > 7) {
				break;
			}
			if (board[xcheck][ycheck] != 0) {
				piecesInWay += 1;
			} 
			if (piecesInWay == 2) {
				break;
			}
			if (xcheck == x2 && ycheck == y2) {
				return true;
			}
		}
		
	} else if (board[x1][y2] == 6) { // Pawn
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
