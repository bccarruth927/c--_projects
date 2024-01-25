/*
    * This C++ program simulates a Tic-Tac-Toe game that can be played by two players
    * Currently operating inside of the terminal, GUI being developed
    * Validation requirements to be introduced
*/

#include <iostream>
#include <vector>
#include <limits>

#include "tictactoe_functions.hpp"

using namespace std;

int main() {

    //Player choice variable
    int choice;

    //Player variables
    bool player1 = true;
    bool player2 = false;
    bool active_player = player1;

    //Tic-Tac-Toe!
    bool tic_tac_toe = false;

    //Turns variable
    int turns = 0;

    //Game greeting w/ instructions
    greet();

    //Declare/initialize the game board
    vector<vector<char>> game_board
    {
        //Row one of game board
        {'-', ' ', '|', ' ', '-', ' ', '|', ' ', '-'},
        //Row two of game board
        {'-', ' ', '|', ' ', '-', ' ', '|', ' ', '-'},
        //Row three of game board
        {'-', ' ', '|', ' ', '-', ' ', '|', ' ', '-'}
    };

    while (tic_tac_toe != true && turns < 8) {

        //Shows which player's turn is currently active
        if (active_player == player1) {
            cout << "It is Player 1's turn to choose...\n\n";
        } else {
            cout << "It is Player 2's turn to choose...\n\n";
        }

        //Displays the active game board
        display_board(game_board);

        //Asks for the users choice
        cout << "Make a choice between 1 - 9...\n";
        cin >> choice;
        cout << "\n\n";

        //Validates a user input is only between the numbers 1 and 9
        while (choice <= 0 || choice > 10) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout << "Make a choice between 1 - 9...\n";
                cin >> choice;
                cout << "\n\n";
            } else {
                break;
            }
        }

        //Alters the game board based off of users choice
        switch(choice) {
        case 1 :
            if (active_player == player1) {
                game_board[0][0] = 'X';
            } else {
                game_board[0][0] = 'O';
            }
        break;
        case 2 :
            if (active_player == player1) {
                game_board[0][4] = 'X';
            } else {
                game_board[0][4] = 'O';
            }
        break;
        case 3 :
            if (active_player == player1) {
                game_board[0][8] = 'X';
            } else {
                game_board[0][8] = 'O';
            }
        break;
        case 4 :
            if (active_player == player1) {
                game_board[1][0] = 'X';
            } else {
                game_board[1][0] = 'O';
            }
        break;
        case 5 :
            if (active_player == player1) {
                game_board[1][4] = 'X';
            } else {
                game_board[1][4] = 'O';
            }
        break;
        case 6 :
            if (active_player == player1) {
                game_board[1][8] = 'X';
            } else {
                game_board[1][8] = 'O';
            }
        break;
        case 7 :
            if (active_player == player1) {
                game_board[2][0] = 'X';
            } else {
                game_board[2][0] = 'O';
            }
        break;
        case 8 :
            if (active_player == player1) {
                game_board[2][4] = 'X';
            } else {
                game_board[2][4] = 'O';
            }
        break;
        case 9 :
            if (active_player == player1) {
                game_board[2][8] = 'X';
            } else {
                game_board[2][8] = 'O';
            }
        break;
        default:
            cout << "Invalid choice :(";
        }

        //Check for a Tic-Tac-Toe
        tic_tac_toe = check_tic_tac_toe(game_board);

        //End the game if Tic-Tac-Toe
        if (tic_tac_toe == true) {
            if (active_player == player1) {
                cout << "Tic-Tac-Toe! Player 1 wins!";
            } else {
            cout << "Tic-Tac-Toe! Player 2 wins!";
            }
        } else {
        //Switch the active player at the end of the turn
        if (active_player == player1) {
            player2 = true;
            active_player = player2;
            player1 = false;
        } else {
            player1 = true;
            active_player = player1;
            player2 = false;
        }
        turns++;
    }

    }

    //End the program
    return 0;
}