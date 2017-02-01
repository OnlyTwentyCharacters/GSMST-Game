#include <iostream>
#include "include/Player.h"
#include <string>
#include <unistd.h>

using namespace std;

void Sleep(float s) {
    int sec = int (s * 1000000);
    usleep(sec);
}

string getInput (string question) {
    string answer;
    cout << question << endl << endl;
    cin >> answer;
    cout << endl;
    return answer;
}

void clear() {
    cout << "\033[2J\033[1;1H";
}

int main() {
    Player* player = new Player();
    
    cout << "Welcome to GSMST: The land of silhouettes, Profe's, and most importantly...." << endl << endl << "CALHOUNS!!!" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "Warning: Things are about to get wierd, and if you aren't at least one of the" << endl;
    cout << "\tpeople that know some jokes, you might as well just leave, because" << endl;
    cout << "\tyou won't understand squat :)" << endl << endl;
    string name = getInput("So without further ado... what is thy name?");
    player->setName(name);
    
    cout << "Hello, " << player->getName() << "!" << endl << endl;
    
    cout << "Starting game in..." << endl;
    cout << "5" << endl;
    Sleep(1);
    cout << "4" << endl;
    Sleep(1);
    cout << "3" << endl;
    Sleep(1);
    cout << "2" << endl;
    Sleep(1);
    cout << "1" << endl;
    Sleep(1);
    
    clear();
    
    delete player;
    return 0;
}