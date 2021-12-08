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
    int my_string = 0;
    int old_string = 0;
    int i = 0;
    int counter = 0;

    ifstream myfile; myfile.open("readings.txt");

    while (i < 2000) {
        if (myfile.is_open()) {
            myfile >> my_string;
            cout << my_string;
            if (my_string > old_string) {
                cout << " : greater" << endl;
                counter++;
            }
            else {
                cout << " : not greater" << endl;
            }
        
            old_string = my_string;
        }
        i++;
    }
    counter--;
    cout << counter << endl;

}
