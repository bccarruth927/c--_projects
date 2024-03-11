/*
    The functions used throughout the main application for the text adventure game
*/

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

//Ask the user to confirm they're ready to start the game

void start_game(char user_input) {
    while (user_input != 'y') {
        //Reset the buffer state
        cin.clear();
        //Empty the buffer state
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Are you sure? It'll be fun!\n";
        cin >> user_input;
        cout << "\n";
    }
}

//The validation function to ensure the user is only entering integer values between 1 and 3

void validate_user_input(int user_response) {
    while (!isdigit(user_response) && (user_response <= 0 || user_response > 3)) {
        //Reset the buffer state (learned from StackOverflow forum)
        cin.clear();
        //Empty the buffer state (learned from StackOverflow forum)
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Please enter a number between 1 and 3...\n";
        cin >> user_response;
        cout << "\n";
    }
}

//The comparison function used to determine which index of the responses list to update based on the user's response

void update_responses_list(int user_choice, vector<int> &user_responses) {
    if (user_choice == 1) {
        user_responses[0] = user_responses[0] + 1;
    } else if (user_choice == 2) {
        user_responses[1] = user_responses[1] + 1;
    } else {
        user_responses[2] = user_responses[2] + 1;
    }
}

//The iteration function to determine which of the three response types the user chose the most

int determine_max_responses(vector<int> user_responses) {
    int max = 0;
    for (int i = 0; i < user_responses.size(); i++) {
        if (user_responses[i] > max) {
            max = user_responses[i];
        }
    }
    return max;
}

//The end game function to determine how the user chose to live out the story

void end_game(int max, vector<int> user_responses) {
    if (max == user_responses[0]) {
        cout << "The battle for Helms Deep is concluded.\n";
        cout << "Gandalf the White arrived at sunrise with Eomir and the outcasted Rohirrim.\n";
        cout << "Victory for Rohan was assured and the Rohirrim live to see another day!\n";
        cout << "\n";
        cout << "Based on your responses you chose to follow along the main storyline. A true Lord of the Rings fan!\n";
    } else if (max == user_responses[1]) {
        cout << "The battle for Helms Deep is concluded.\n";
        cout << "Gandalf the White arrived at sunrise with Eomir and the outcasted Rohirrim.\n";
        cout << "Victory for Rohan was assured and the Rohirrim live to see another day!\n";
        cout << "\n";
        cout << "Based on your responses you chose a more stubborn approach to King Theoden but ultimately weren't a complete nut.\n";
    } else {
        cout << "The battle for Helms Deep is concluded.\n";
        cout << "Gandalf the White arrived at sunrise with Eomir and the outcasted Rohirrim.\n";
        cout << "Victory for Rohan was assured and the Rohirrim live to see another day!\n";
        cout << "\n";
        cout << "Based on your responses you were a nut on the battlefield and your decisions needlessly sacrificed innocent lives.\n";
    }
}

//The main greeting function

void greeting() {
    cout << "===============\n";
    cout << "Welcome to Brenden's Text Adventure Game!\n";
    cout << "Based on the critically acclaimed book \"The Lord of the Rings: The Two Towers\"\n";
    cout << "Segments of the story will presented to you and you will have a choice of how to respond.\n";
    cout << "The story will be impacted based on your responses to each segment.\n";
    cout << "What story do you have in store for us? :D\n";
    cout << "===============\n";
    cout << "\n";
    cout << "Are you ready to start? Type 'y' if you're ready to go...\n";
    cout << "\n";
}

//Question one function

void question_one() {
    cout << "\n";
    cout << "Our story starts at the Rohirrim capital Edoras.\n";
    cout << "King Theoden has just been informed by his allies the Saruman the White is preparing a massive invasion force.\n";
    cout << "The King decides to flee the capital for the safety of the Rohirrim fortress of Helms Deep.\n";
    cout << "While on the way to the fortress they are attacked by Orc scouts!\n";
    cout << "If you were King Theoden; how would you respond to the threat?\n";
    cout << "\n";
    cout << "1) Assemble your allies and engage the enemy scout platoon to ensure sage passage for the civilians.\n";
    cout << "2) Remain back and attempt to fend off the attacking scouts while they come to you.\n";
    cout << "3) Abandon your supply carriages and hope that the Orcs are after them and not your people.\n";
    cout << "\n";
}

//Question two function

void question_two() {
    cout << "\n";
    cout << "After the encounter with Orcish scouts the Rohirrim arrive at Helms Deep.\n";
    cout << "Sadly, you are under the belief your companion Aragorn has fallen to the scourge.\n";
    cout << "Your niece, Eowyn, a shield maiden of Rohan fancied him quite highly.\n";
    cout << "As her uncle, how do you break the news?\n";
    cout << "\n";
    cout << "1) Sadly. Offer her nothing than a solemn look, knowing full well what a great loss it is.\n";
    cout << "2) Gently. Give her your condolences but don't go much farther.\n";
    cout << "3) Loudly. You let everyone know of the bravery of your fallen comrade.\n";
    cout << "\n";
}

//Question three function

void question_three() {
    cout << "\n";
    cout << "It's a miracle! Aragorn has returned after he was thought lost.\n";
    cout << "He comes bearing grim news however. The Uruk-Hai are coming and they're at least 10,000 strong!\n";
    cout << "He implores that you send a request to the kingdom of Gondor for aid in the coming fight.\n";
    cout << "How would you as Theoden, King of Rohan, respond to this request?\n";
    cout << "\n";
    cout << "1) \"Gondor?! Where was Gondor when the Westfold fell?\"\n";
    cout << "2) \"Indeed... we really could use all the help we can get.\"\n";
    cout << "3) \"Perhaps we are mistaken. Perhaps Saruman will listen to reason if we simply surrender.\"\n";
    cout << "\n";
}

//Question four function

void question_four() {
    cout << "\n";
    cout << "The battle looms. You are in dire need of soldiers to defend the keep.\n";
    cout << "Suddenly you hear a horn. Though it doesn't carry the sound of Uruk-Hai war horn.\n";
    cout << "You then hear your soldiers manning the main gate shouting to have it opened.\n";
    cout << "In marches an army of Elves from the kingdom of Lothlorien!\n";
    cout << "How do you as Theoden, respond to the sudden arrival of this ancient ally?\n";
    cout << "\n";
    cout << "1) Gratefully! A bit surprised and a loss for words, but grateful none the less.\n";
    cout << "2) Stubbornly. You're tempted to turn them away as they haven't been of help to you before.\n";
    cout << "3) Awkwardly... You decline their aid though they remain to fight at Aragorn's request.\n";
    cout << "\n";
}

//Question five function
void question_five() {
    cout << "\n";
    cout << "At long last your enemy arrives at the gates of Helms Deep.\n";
    cout << "The anticipation has been building and all the soldiers you command are anxious.\n";
    cout << "As the King, in this moment before battle officially starts, what do you do?\n";
    cout << "\n";
    cout << "1) Steel your nerves and trust in your soldiers and allies to win the day!\n";
    cout << "2) Give a silent gaze to horizon and quietly contemplate what lies beyond.\n";
    cout << "3) Raise the white flag and surrender! The Uruk-Hai and their master are capable of diplomacy right?\n";
    cout << "\n";
}

//Question six function
void question_six() {
    cout << "\n";
    cout << "Disaster! The wall has been breached! The mad wizard Saruman learned to concoct explosives!\n";
    cout << "With the wall breached your forces in the keep are now exposed on two fronts.\n";
    cout << "Your allies stationed on and behind the wall are being overrun.\n";
    cout << "What is your tactical response to the mounting pressure?\n";
    cout << "\n";
    cout << "1) Draw your sword and join your soldiers in the keep defending the main gate.\n";
    cout << "2) Divide your forces in the keep. Half defend the gate, half help reinforce the soldiers at the wall.\n";
    cout << "3) Abandon those on the wall and shore up the defenses that would lead to the keep.\n";
    cout << "\n";
}

//Question seven function
void question_seven() {
    cout << "\n";
    cout << "Despite your soldiers best efforts the Uruk-Hai are to many.\n";
    cout << "They breach the main gate to the keep and stream in by the hundreds.\n";
    cout << "You have commanded your remaining forces to retreat into the keep and barricade the entrance.\n";
    cout << "This is when Aragorn gives you an outrageous proposal.\n";
    cout << "Ride out and meet the enemy head on!\n";
    cout << "If you were Theoden, what would be your response?\n";
    cout << "\n";
    cout << "1) \"For death and glory!\"\n";
    cout << "2) \"No, we must all use the mountain pass and attempt to flee the enemy.\"\n";
    cout << "3) \"Are you mad?! The day is lost. It is time we accept our fate.\"\n";
    cout << "\n";
}