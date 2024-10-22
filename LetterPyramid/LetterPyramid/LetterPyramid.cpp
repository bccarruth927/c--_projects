// LetterPyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
    + Letter Pyramid program - creates a pyramid out of characters in a provided string
    + Example:
    + User input: 12345
    + Pyramid output:
    +     1
    +    121
    +   12321
    +  1234321
    + 123454321
    =========================
    Pseudocode
    =========================
    + Prompt the user for input, use "getline" function in case user uses a multi-word phrase
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    cout << "Welcome to the Letter Pyramid generator!" << endl;
    cout << "Please provide me with a string that I can turn into a Pyramid!\n> ";

    string user_input{};
    getline(cin, user_input);

    string reformat_user_input{};
    for (auto c : user_input)
    {
        if (c == ' ')
            continue;
        else
            reformat_user_input += c;
    }

    int cut_off{ 1 };

    for (auto c : reformat_user_input)
    {
        string pyramid_tier{};
        string sub_string = reformat_user_input.substr(0, cut_off);
        for (size_t i = 0; i < sub_string.length(); ++i)
            pyramid_tier += sub_string[i];
        if (sub_string.length() > 1)
            for (size_t j = sub_string.length()-1; j > 0; --j)
                pyramid_tier += sub_string[j-1];
        pyramid_tier += "\n";
        cout << pyramid_tier;
        cut_off++;
    }

    // cout << user_input;  Test the getline method works correctly
    // cout << reformat_user_input;   Test the white space is removed from user_input

    return 0;
}

