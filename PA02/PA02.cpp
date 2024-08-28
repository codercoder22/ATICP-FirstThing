#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
   ifstream infile ("PA02SampleFile.txt");
   string num;
   int countNum = 0;
   for (int i = 0; i < 10; i++) {
      while (true) {   
         getline (infile, num);
         int x = stoi(num);
         if (x == i) {
            countNum = countNum + 1;
         }
         if (infile.eof()) {
            cout << i << " " << countNum << endl;
            countNum = 0;
            infile.clear();
            infile.seekg(0);
            break;
         }
      }
   }
}   