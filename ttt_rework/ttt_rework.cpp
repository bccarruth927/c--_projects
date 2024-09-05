#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <algorithm>

#include "ttt_funcs.hpp"

using namespace std;

int main() {
    // Declare essential variables
    // Collects the input from the player
    int player_input;
    
    // Sets the active player
    // Initialized to "Player 1" by default
    string active_player = "Player 1";

    // Boolean variable used to establish if a tic-tac-toe was achieved
    // Initialized to false
    bool tic_tac_toe = false;

    // Counter for the number of turns taken
    int turns = 0;

    // Vector holding all previously used values
    // Initialized as an empty vector
    vector<int> used_values;
    
    // Initialize the 2D game board vector
    vector<vector<char>> game_board
    {
        //Row one of game board
        {'-', ' ', '|', ' ', '-', ' ', '|', ' ', '-'},
        //Row two of game board
        {'-', ' ', '|', ' ', '-', ' ', '|', ' ', '-'},
        //Row three of game board
        {'-', ' ', '|', ' ', '-', ' ', '|', ' ', '-'}
    };


    // Greet the players and start the game
    greet();

    // While loop that enables the cycling of player turns and refreshes game board with new values
    while (tic_tac_toe != true && turns < 9) {

        // Display the current active player
        display_active_player(active_player);

        // Display the current game board
        display_board(game_board);

        // Collect input from the user to determine symbol placement
        cout << "Please make a choice between 1 and 9...\n";
        cin >> player_input;
        // "\n\n" provides some padding to improve user visibility
        cout << "\n\n";

        // Validate the user input to ensure the player_input is an integer between 1 and 9
        // Also validate the at the user input has not already been used in the game
        while (player_input > 9 || player_input < 1 || std::find(used_values.begin(), used_values.end(), player_input) != used_values.end() || cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Please make a choice between 1 - 9...\n";
            cin >> player_input;
            cout << "\n\n";
        }

        // Add the player input to the used values vector
        used_values.push_back(player_input);

        // Alter the game board based on the player's input
        alter_game_board(player_input,active_player,game_board);

        // Check game board to determine if a Tic-Tac-Toe is present
        // Function returns a boolean value of true if Tic-Tac-Toe is achieved
        // Value of tic_tac_toe is set to true if Tic-Tac_toe is achieved
        if (check_tic_tac_toe(game_board) == true) {
            tic_tac_toe = true;
        } else {
            tic_tac_toe = false;
        }

        // Determine whether the game was won by Tic-Tac-Toe
        // If no Tic-Tac-Toe is present switch the active player
        if (tic_tac_toe == true) {
            end_game(active_player);
        } else {
            switch_player(active_player);
        }

        // Increase the number of turns by 1 to prevent an infinite loop
        turns++;
    }


    // End the Tic-Tac-Toe program
    return 0;
}