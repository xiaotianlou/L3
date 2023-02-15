


void makeMove (char* input, int board[8][8]) {
	int start_y = input[0] - 48;
	int start_x = input[1] - 48;
	int end_y = input[3] - 48;
	int end_x = input[4] - 48;

	board[end_x][end_y] = board[start_x][start_y];
	board[start_x][start_y] = 0;
}
void showBoard (int board[8][8]) {
    printf("\n\n  01234567\n");
    printf("\n\n╔════════╗\n");

printf("\n\n┌─┬─┬─┬─┬─┬─┬─┬─┐\n");

for (int i = 0; i < 8; i++) {
//		printf("│");
bool flag = true;
printf("║");
printf("%d ", i);
for (int j = 0; j < 8; j++) {
if (!flag) {
printf("│");
}
flag = false;
//			printf("");
//			printf("");
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
case 6:
printf("♙");
}
}
printf("│\n") ;
if (i < 7) {
printf("├─┼─┼─┼─┼─┼─┼─┼─┤\n") ;
}
printf("\n");
printf("║\n") ;
}
printf("└─┴─┴─┴─┴─┴─┴─┴─┘\n");
printf("╚════════╝\n");
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
		printf("Move Invalid! Try again!");
	}
    	if (whitesMove) {
      		printf("White to move.\n");
    	} else {
      		printf("Black to move.\n");
    	}
    	printf("♔ >> ");
	scanf("%s", buf);
	flag = true;
    } while (!isValidMove(buf, board)&& buf[0] != 'q' && buf[0] != 'Q');
    makeMove(buf, board);
    whitesMove = !whitesMove;
  } while (buf[0] != 'q' && buf[0] != 'Q') ;

	printf("Terminating...\n") ;
}
