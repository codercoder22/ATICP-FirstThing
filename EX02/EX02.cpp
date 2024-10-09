#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
//Structs are Public (can be used anywhere), Classes are private (can only be used )
struct Table{
    int numberOfLegs;
    int height;
    bool sturdy;
}

int timesTwo(int num);
int timesTwo(int num) {
    return num*2;
}

//Pass by Value
//Makes a copy of the variable so it doesn't change outside the function
void changeThis(int x) {
    x = 5;
    cout << x << endl;
}

//This is passing by reference (uses & sign)
//This refers to the actual memory address of the variable, which actually changes the value.
void actualChange (int &x) {
    x = 5;
    cout << x << endl;
}
int main(int argc, char const *argv[]) {
    cout << timesTwo(stoi(argv[1])) << endl;
    cout << stoi(argv[2]) << endl;
    //changeThis(stoi(argv[2]));
    int x = stoi(argv[2]);
    actualChange(x);
}