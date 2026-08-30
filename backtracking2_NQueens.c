#include <stdio.h>
#include <stdbool.h>

#define MAX 10

int board[MAX][MAX];
int n;


bool isSafe(int row, int col) {

    
    for (int j = 0; j < col; j++) {
        if (board[row][j] == 1) {
            return false;
        }
    }

    
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    
    for (int i = row, j = col; i < n && j >= 0; i++, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    return true;
}


void printBoard() {

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (board[i][j] == 1)
                printf("Q ");
            else
                printf(". ");
        }

        printf("\n");
    }

    printf("\n");
}


void solve(int col) {

    
    if (col == n) {
        printBoard();
        return;
    }

    
    for (int row = 0; row < n; row++) {

        
        if (isSafe(row, col)) {

           
            board[row][col] = 1;

            
            solve(col + 1);

            
            board[row][col] = 0;
        }
    }
}


int main() {

    printf("Enter number of queens: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = 0;
        }
    }

    
    solve(0);

    return 0;
}