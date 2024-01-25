//Functions for the Tic-Tac-Toe program in tictactoe.cpp

#include <iostream>
#include <vector>
using namespace std;

//Greeting function

void greet() {
    cout << "=============\n";
    cout << "Let's Play Tic-Tac-Toe!\n";
    cout << "=============\n";
    cout << "\n";
}

//Display game board function

void display_board(vector<vector<char>> game_board) {
    for (int i = 0; i < game_board.size(); i++) {
        for (int j = 0; j < game_board[i].size(); j++) {
            cout << game_board[i][j];
        }
        cout << "\n\n";
    }
}

bool check_tic_tac_toe(vector<vector<char>> game_board) {

    if (game_board[0][0] == 'X' && game_board[0][4] == 'X' && game_board[0][8] == 'X') {
        return true;
    } else if (game_board[0][0] == 'O' && game_board[0][4] == 'O' && game_board[0][8] == 'O') {
        return true;
    } else if (game_board[1][0] == 'X' && game_board[1][4] == 'X' && game_board[1][8] == 'X') {
        return true;
    } else if (game_board[1][0] == 'O' && game_board[1][4] == 'O' && game_board[1][8] == 'O') {
        return true;
    } else if (game_board[2][0] == 'X' && game_board[2][4] == 'X' && game_board[2][8] == 'X') {
        return true;
    } else if (game_board[2][0] == 'O' && game_board[2][4] == 'O' && game_board[2][8] == 'O') {
        return true;
    } else if (game_board[0][0] == 'X' && game_board[1][0] == 'X' && game_board[2][0] == 'X') {
        return true;
    } else if (game_board[0][0] == 'O' && game_board[1][0] == 'O' && game_board[2][0] == 'O') {
        return true;
    } else if (game_board[0][4] == 'X' && game_board[1][4] == 'X' && game_board[2][4] == 'X') {
        return true;
    } else if (game_board[0][4] == 'O' && game_board[1][4] == 'O' && game_board[2][4] == 'O') {
        return true;
    } else if (game_board[0][8] == 'X' && game_board[1][8] == 'X' && game_board[2][8] == 'X') {
        return true;
    } else if (game_board[0][8] == 'O' && game_board[1][8] == 'O' && game_board[2][8] == 'O') {
        return true;
    } else if (game_board[0][0] == 'X' && game_board[1][4] == 'X' && game_board[2][8] == 'X') {
        return true;
    } else if (game_board[0][0] == 'O' && game_board[1][4] == 'O' && game_board[2][8] == 'O') {
        return true;
    } else if (game_board[0][8] == 'X' && game_board[1][4] == 'X' && game_board[2][0] == 'X') {
        return true;
    } else if (game_board[0][8] == 'O' && game_board[1][4] == 'O' && game_board[2][0] == 'O') {
        return true;
    } else {
        return false;
    }
}