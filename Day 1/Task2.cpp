/*
* Created by Rory Godwin 
* Completed on 08/12/2021
* Achieved as part of the Advent of code 2021
* Task 1 - How data input checked as higher or lower
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int first_string = 0;
    int second_string = 0;
    int third_string = 0;
    int i = 0;
    int counter = 0;
    int summer = 1;
    int new_sum = 0;
    int old_sum = 0;

    ifstream myfile; myfile.open("readings.txt");

    while (i < 2000) {
        if (myfile.is_open()) {
            switch (summer) {
            case 1:
                myfile >> first_string;
                break;
            case 2:
                myfile >> second_string;
                break;
            case 3:
                myfile >> third_string;
                summer = 0;
                break;
            }
            summer++;
            if ((first_string > 0) && (second_string > 0) && (third_string > 0)) {
                new_sum = first_string + second_string + third_string;
                cout << first_string << " + " << second_string << " + " <<
                    third_string << " = " << new_sum << endl;

                if (new_sum > old_sum) {
                    counter++;
                    cout << "greater than" << endl << endl;
                }
            }
            old_sum = new_sum;
        }
        i++;
    }
    counter--;
    cout << counter << endl;

}
