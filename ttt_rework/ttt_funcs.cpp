#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

// Greeting function used to initialize the game
void greet() {
    cout << "=============\n";
    cout << "Let's Play Tic-Tac-Toe!\n";
    cout << "=============\n";
    cout << "\n";
    cout << "Two players are required to play the game. Each turn will alternate between players.\n";
    cout << "Player 1 will be X's and Player 2 will be O's\n";
    cout << "The game will accept input in the form of numbers between 1 and 9. Starting in the left corner at 1 and ending in the right corner at 9.\n";
    cout << "The game continue until either a set number of turns is reached or a tic-tac-toe is achieved by a Player.\n";
    cout << "Best of luck to both Players!\n";
    cout << "\n";
}


// Function to display the current active player
void display_active_player(string active_player) {
    if (active_player == "Player 1") {
        cout << "It is Player 1's turn to choose...\n\n";
    } else {
        cout << "It is Player 2's turn to choose...\n\n";
    }
}


// Loop function used to display the game board in the terminal
void display_board(vector<vector<char>> game_board) {
    for (int i = 0; i < game_board.size(); i++) {
        for (int j = 0; j < game_board[i].size(); j++) {
            cout << game_board[i][j];
        }
        cout << "\n\n";
    }
}


// Function to switch the active player after the current active player makes a choice
void switch_player(string &active_player) {
    if (active_player == "Player 1") {
        active_player = "Player 2";
    } else {
        active_player = "Player 1";
    }
}


// Function to end the game if Tic-Tac-Toe is achieved
void end_game(string active_player) {
    if (active_player == "Player 1") {
            cout << "\nTic-Tac-Toe! Player 1 wins!\n\n";
    } else {
            cout << "\nTic-Tac-Toe! Player 2 wins!\n\n";
    }
}


// Alter the game board based on the received user input
// Function accepts 4 arguments as parameters: the player's choice, which player is currently active, the game board and the used values vector
// Function utilizes a switch statement with cases defined by the possible player choice options (integers 1-9)
// If player choice matches a case a conditional statement checks which player is currently active then alters the game board accordingly
// The player choice is then appended to the used_values vector to be validated against in future turns
void alter_game_board(int player_choice, string active_player, vector<vector<char>> &game_board) {
    switch(player_choice) {
        case 1 :
            if (active_player == "Player 1") {
                game_board[0][0] = 'X';
            } else {
                game_board[0][0] = 'O';
            }
        break;
        case 2 :
            if (active_player == "Player 1") {
                game_board[0][4] = 'X';
            } else {
                game_board[0][4] = 'O';
            }
        break;
        case 3 :
            if (active_player == "Player 1") {
                game_board[0][8] = 'X';
            } else {
                game_board[0][8] = 'O';
            }
        break;
        case 4 :
            if (active_player == "Player 1") {
                game_board[1][0] = 'X';
            } else {
                game_board[1][0] = 'O';
            }
        break;
        case 5 :
            if (active_player == "Player 1") {
                game_board[1][4] = 'X';
            } else {
                game_board[1][4] = 'O';
            }
        break;
        case 6 :
            if (active_player == "Player 1") {
                game_board[1][8] = 'X';
            } else {
                game_board[1][8] = 'O';
            }
        break;
        case 7 :
            if (active_player == "Player 1") {
                game_board[2][0] = 'X';
            } else {
                game_board[2][0] = 'O';
            }
        break;
        case 8 :
            if (active_player == "Player 1") {
                game_board[2][4] = 'X';
            } else {
                game_board[2][4] = 'O';
            }
        break;
        case 9 :
            if (active_player == "Player 1") {
                game_board[2][8] = 'X';
            } else {
                game_board[2][8] = 'O';
            }
        break;
    }

}


// Function accepts the current game board and uses a series of conditional statements to determine if Tic-Tac-Toe is present
// If a pattern is found then the function returns true
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