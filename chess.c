#include <stdio.h>
#include <stdbool.h>

void showBoard(int board[8][8]);

bool validMove (char* input) {
	// Add move validity checks some other time! Too lazy!! 
	return True;
}

void makeMove (char* input, int* board[8][8]) {
	start_x = input[0] - 48;
	start_y = input[1] - 48;
	end_x = input[3] - 48;
	end_y = input[4] - 48;
	
	*board[end_x][end_y] = *board[start_x][start_y];
}

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
    bool flag = false; 
    showBoard(board);
    do {
	if (flag) {
		printf("Move Invalid! Try again!")
	}
    	if (whitesMove) {
      		printf("White to move.\n");
    	} else {
      		printf("Black to move.\n");
    	}
    	printf("♔ >> ");
	scanf("%s", buf);
	flag = true;
    } while (!isValidMove(buf, board) && buf[0] != 'q' && buf[0] != 'Q');
    makeMove(buf, &board);
  } while (buf[0] != 'q' && buf[0] != 'Q') ;
    
	printf("Terminating...\n") ;
}
