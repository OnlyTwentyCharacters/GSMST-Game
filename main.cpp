#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

void intro();
bool chemistry();

string name = "Noname";

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
    intro();
    if (!chemistry()) {
        cout << "You failed Chemistry :(" << endl;
    }
    
    return 0;
}

void intro() {
    cout << "Welcome to GSMST: The land of silhouettes, Profe's, and most importantly...." << endl << endl << "CALHOUNS!!!" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "Warning: Things are about to get wierd, and if you aren't at least one of the" << endl;
    cout << "\tpeople that know some jokes, you might as well just leave, because" << endl;
    cout << "\tyou won't understand squat :) Also, another thing: I'm squeezing a" << endl;
    cout << "\tyear and a half of material into one day, so ya" << endl << endl;
    name = getInput("So without further ado... what is thy name?");
    
    cout << "Hello, " << name << "!" << endl << endl;
    
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
    
    cout << "A few weeks ago, you applied for the GSMST lottery. You have been waiting, giving" << endl;
    cout << "you mild stress. Another thing that adds to this stress is that you hear that the" << endl;
    cout << "homework is extremely hard. You are not looking forward to this, so it is making" << endl;
    cout << "you sad." << endl << endl;
    Sleep(2);
    cout << "You go throught Summer Stem and get scared because you recieve stacks of homework" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    Sleep(2);
    cout << "you feel ancious on your first day of school. You hope your teacher will be nice" << endl;
    cout << "and not strange. As your mom pulls up to the school, you feel your heart pounding" << endl;
    cout << "like nothing else you have every felt. Thankfuly, there are people inside the" << endl;
    cout << "building that can help you find yourself around. You are directed towards a paper" << endl;
    cout << "taped to a wall. You walk up to it. The paper has several names on it, one of them" << endl;
    cout << "being yours. You look at the teacher beside it and see your homeroom teacher's" << endl;
    cout << "Mr. Calhoun in room 5.232. You walk in... beginning your day" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    Sleep(8);
}

bool chemistry() {
    cout << "BTW, this section has the most stuff in it, because the most interesting things" << endl;
    cout << "happened in this class, so deal with it" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    Sleep(3);
    cout << "As you walk in........ you see a dude with an interesting beard. He tells you to" << endl;
    cout << "stand in the back of the room, so you do. In that particular location, you see" << endl;
    cout << "your friend from middle school, and...... no one else you know. Bummer. He then" << endl;
    cout << "places a namecard on each desk, each with a name on it. He then instructs everyone" << endl;
    cout << "to sit in the seat that our nametag is at." << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    Sleep(5);
    cout << "After you sit, Mr. Calhoun projects a warm-up onto the board:" << endl;
    cout << "IF YOU HAVE 17 MOLES OF SUBSTANCE 'A' AND 12 KILOMOLES OF SUBSTANCE 'B', HOW MANY" << endl;
    cout << "MOLES OF SUBSTANCE 'C' DO YOU NEED TO MAKE SUBSTANCE 'D' 2 MOLES OF SUBSTANCE 'B'?" << endl << endl;
    Sleep(5);
    cout << "WHAT" << endl;
    Sleep(1);
    cout << "Is" << endl;
    Sleep(1);
    cout << "That?" << endl << endl;
    Sleep(1);
    cout << "You think about it for a while, and you can't figure it our. Suddenly, you hear Mr." << endl;
    cout << "Mr. Calhoun threaten that he is going to start calling on people to start answering!!" << endl << endl;
    
    string answer = getInput("So, what do you do?\n\na) Write 'Answer Choice A'\nb) Write 'The answer is 16.72 moles of substance 'O' because 2 divided by 17 is 4'\nc) Sit and wait and hope he doesn't call on you\nd) Laugh\n\n");
    if (answer == "a") {
        cout << "Of course, Mr. Calhoun calls on you. You answer with 'Answer Choice A'" << endl;
        Sleep(3);
        cout << "To your dismay, Mr. Calhoun yells at you because... its not a multiple choice question :)" << endl;
        return false;
    } else if (answer == "b") {
        cout << "Of course, Mr. Calhoun calls on you. You answer with 'The answer is 16.72 moles of" << endl;
        cout << "substance 'O' because 2 divided by 17 is 4'. Supprizingly, you got the answer correct" << endl;
        cout << ", but Mr. Calhoun doesn't see it that way. He comes over and looks at your paper. Of" << endl;
        cout << "course because he drew attention to it, you look down as well" << endl;
        Sleep(2);
        cout << "Lo and behold..." << endl;
        cout << "Your answer jumps off of the paper and under the table" << endl;
        Sleep(1);
        cout << "DO YOU THINK THIS IS FUNNY " << name << "?" << endl;
        return false;
    } else if (answer == "c") {
        Sleep(2);
        cout << "Phew... he doesn't call on you. You are safe... for now" << endl;
    } else if (answer == "d") {
        cout << "Your speech is unintelligable, so Mr. Kuninsky tells you to drop out." << endl;
        return false;
    }
    
    return true;
}