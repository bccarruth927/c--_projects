/*
    This is a text adventure game that immerses you in the Battle For Helms Deep from the widely popular
    book "The Lord of the Rings: The Two Towers"
    * Your choices will impact the fictional recreation of the battle for the Rohirrim fortress of Helms Deep
*/

#include <iostream>
#include <vector>
#include <limits>

#include "text_game_functions.hpp"

using namespace std;

//The main program for the text game
int main() {

    //Container list to hold the user response to each segment
    //The list is in order from left to right *User answers 1, answer is stored in index 0*
    //List has a maximum of 3 elements each initialized to 0
    
    vector<int> responses = {0, 0, 0};

    //Container variable to hold the user input when they respond to a question
    //Will be used to update the list of responses
    
    int response;

    //Container variable to confirm whether the user is ready to start the game
    
    char start;



    //Greeting function to welcome the player to the text adventure game
    //Gather user input to start the game
    
    greeting();
    cin >> start;

    //Start the game
    
    start_game(start);

    //Question one function to ask the user the first story based question
    //Gather the user input for question one
    //Validate the user input for question one
    //Update the responses list after the user answers question one
    
    question_one();
    cin >> response;
    validate_user_input(response);
    update_responses_list(response, responses);

    //Question two function to ask the user the second story based question
    //Gather the user input for question two
    //Validate the user input for question two
    //Update the responses list after the user answers question two
    
    question_two();
    cin >> response;
    validate_user_input(response);
    update_responses_list(response, responses);

    //Question three function to ask the user the third story based question
    //Gather the user input for question three
    //Validate the user input for question three
    //Update the responses list after the user answers question three
    
    question_three();
    cin >> response;
    validate_user_input(response);
    update_responses_list(response, responses);

    //Question four function to ask the user the fourth story based question
    //Gather the user input for question four
    //Validate the user input for question four
    //Update the responses list after the user answers question four

    question_four();
    cin >> response;
    validate_user_input(response);
    update_responses_list(response, responses);

    //Question five function to ask the user the fifth story based question
    //Gather the user input for question five
    //Validate the user input for question five
    //Update the responses list after the user answers question five
    
    question_five();
    cin >> response;
    validate_user_input(response);
    update_responses_list(response, responses);

    //Question six function to ask the user the sixth story based question
    //Gather the user input for question six
    //Validate the user input for question six
    //Update the responses list after the user answers question six

    question_six();
    cin >> response;
    validate_user_input(response);
    update_responses_list(response, responses);

    //Question seven function to ask the user the seventh story based question
    //Gather the user input for question seven
    //Validate the user input for question seven
    //Update the responses list after the user answers question seven

    question_seven();
    cin >> response;
    validate_user_input(response);
    update_responses_list(response, responses);

    //Determine which response was greater by iterating through the responses list and assign to the max variable
    
    int max_response = determine_max_responses(responses);

    //Determine the outcome of the story based on the users max responses

    end_game(max_response, responses);

    //End the program
    return 0;
}