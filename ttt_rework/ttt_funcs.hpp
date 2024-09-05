#include <vector>
#include <string>

using namespace std;

void greet();

void display_active_player(string active_player);

void display_board(vector<vector<char>> game_board);

void switch_player(string &active_player);

void end_game(string active_player);

void alter_game_board(int player_choice, string active_player, vector<vector<char>> &game_board);

bool check_tic_tac_toe(vector<vector<char>> game_board);