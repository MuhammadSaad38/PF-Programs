/*
Question-01

 Display the following statement on the screen using one cout and 4 cout statement: 
 The most likely way for the world to be destroyed,
 Most experts agree, ‘is by accident’.
 That’s where we come in;
 “We’re computer professionals. We cause accidents.”
*/


#include <iostream>
using namespace std;
int main(){
    cout << "Display using 1 cout:\n\n";
    cout << "The most likely way for the world to be destroyed,\n"
            "    Most experts agree, 'is by accident'.\n"
            "      That's where we come in;\n"
            "\"We're computer professionals. We cause accidents.\"\n\n";
    cout << "Display using 4 cout:\n\n";
    cout << "The most likely way for the world to be destroyed," << endl;
    cout << "    Most experts agree, 'is by accident'." << endl;
    cout << "      That's where we come in;" << endl;
    cout << "\"We're computer professionals. We cause accidents.\"" << endl;
    return 0;
}