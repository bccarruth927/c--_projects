// ListManipMenu.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    + List Manipulation Menu program
    + Program will provide users a menu that enables them to manipulate or read elements of a list of integers
    + P - users can print the numbers in the list to the console
    + A - users can add a number to the list
    + M - users can see the mean value of the list of numbers
    + S - users can see the smallest number
    + L - users can see the largest number
    + Q - users can quit the program
    + Users should only be allowed to make choices as detailed above, upper and lowercase selections are allowed
    + Invalid options should display "Unknown selection, please try again"
    + P option should display numbers inside [] seperated by spaces, ex: [ 1 2 3 4 5 ]
    + A option should prompt the user for an integer, add that integer to the list then display to the user the prompt
    + "num added"
    + M option should calculate the mean of the data, display the mean to the user, if list is empty
    + then should display "Cannot calculate mean - insufficient data
    + S option should display the smallest number in the list, if list is empty should display "Unable to display smallest
    + number - empty list"
    + L option should display the largest number in the list, of list is empty should display "Unable to display largest
    + number - empty list"
    + Q option should exit the program and present a goodbye message
*/

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec {1, 2, 3, 4, 5};
    bool quit{ false };

    do {
        cout << "Welcome to the List Manipulation Menu!" << endl;
        cout << "======================================" << endl;
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        
        char selection{};
        cin >> selection;

        if (selection == 'P' || selection == 'p') {
            cout << "\n[ ";
            for (auto data : vec)
                cout << data << " ";
            cout << "]" << endl << endl;
        }
        else if (selection == 'A' || selection == 'a') {
            int add_int{};
            cout << "Please provide an integer to add: ";
            cin >> add_int;
            vec.push_back(add_int);
            cout << add_int << " added to list." << endl << endl;
        }
        else if (selection == 'M' || selection == 'm') {
            if (vec.size() != 0) {
                int sum{};
                for (auto data : vec)
                    sum += data;
                double mean = static_cast<double>(sum) / vec.size();
                cout << "\nMean is: " << mean << endl << endl;
            }
            else
                cout << "\nCannot calculate mean - empty list." << endl << endl;
        }
        else if (selection == 'S' || selection == 's') {
            if (vec.size() != 0) {
                int small_num = vec.at(0);
                for (int i{ 1 }; i < vec.size(); ++i)
                    if (vec.at(i) < small_num)
                        small_num = vec.at(i);
                cout << "\nSmallest number in the list is: " << small_num << endl << endl;
            }
            else
                cout << "\nUnable to display smallest number - empty list" << endl << endl;
        }
        else if (selection == 'L' || selection == 'l') {
            if (vec.size() != 0) {
                int large_num{};
                for (auto data : vec)
                    if (data > large_num)
                        large_num = data;
                cout << "\nLargest number in the list is: " << large_num << endl << endl;
            }
            else
                cout << "\nUnable to display largest number - empty list" << endl << endl;
        }
        else if (selection == 'Q' || selection == 'q') {
            cout << "\nGoodbye";
            quit = true;
        }
        else
            cout << "\nUnknown selection, please try again." << endl << endl;

    } while (!quit);

    return 0;
}

