/*
    The HPP file containing the functions from text_game_functions.cpp to be used in the main program
*/

#include <vector>

using namespace std;

//The start game function

void start_game(char user_input);

//The user validation function

void validate_user_input(int user_response);

//The update responses list function

void update_responses_list(int user_choice, vector<int> &user_responses);

//The determine max responses function
int determine_max_responses(vector<int> user_responses);

//The greeting function

void greeting();

//The end game function

void end_game(int max, vector<int> user_responses);

//The story question functions

void question_one();
void question_two();
void question_three();
void question_four();
void question_five();
void question_six();
void question_seven();
