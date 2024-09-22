#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
/*
 *  * Split function I found at https://stackoverflow.com/questions/289347/using-strtok-with-a-stdstring
 *   */
 /**
 * Splits a given input string into distinct parts using the specified delimiter.
 *
 * @param str The original string to be split.
 * @param delim The delimiter string indicating separation points.
 * @param parts A reference to a vector where the resulting parts will be stored.
 */
void split(const string& str, const string& delim, vector<string>& parts) {
  size_t start, end = 0;
  while (end < str.size()) {
    start = end;
    while (start < str.size() && (delim.find(str[start]) != string::npos)) {
      start++;  // skip initial whitespace
    }
    end = start;
    while (end < str.size() && (delim.find(str[end]) == string::npos)) {
      end++; // skip to end of word
    }
    if (end-start != 0) {  // just ignore zero-length strings.
      parts.push_back(string(str, start, end-start));
    }
  }
}

void highestScore(int highGrade) {
    cout << highGrade << endl;
}

void writeData(vector<string> gradeBook, string fileNameOut) {
  ofstream outfile (fileNameOut);
  for (int i = 2; i < gradeBook.size(); i=i+3) {
      outfile << gradeBook[i-2] + " "+ gradeBook[i-1] + " " + gradeBook[i] << endl;
  }
}

void calculateGrade(vector<string> gradeBook, string fileNameOut) {
    int grade = 0;
    int highGrade = 0;
    for (int i = 2; i < gradeBook.size(); i=i+3) {
        grade = stoi(gradeBook[i]);
        if (grade > highGrade) {
          highGrade = grade;
        }
        if (grade <= 100 && grade >= 90) {
            gradeBook[i] = gradeBook[i] + " A";
        }
        else if (grade < 90 && grade >= 80) {
            gradeBook[i] = gradeBook[i] + " B";
        }
        else if (grade < 80 && grade >= 70) {
            gradeBook[i] = gradeBook[i] + " C";
        }
        else if (grade < 70 && grade >= 60) {
            gradeBook[i] = gradeBook[i] + " D";
        }
        else{
            gradeBook[i] = gradeBook[i] + " F";
        }
    }
    writeData(gradeBook, fileNameOut);
    highestScore(highGrade);
}

void getData(int argc, string fileName, string fileNameOut) {
    ifstream infile(fileName);
    if (infile.good() == false) {
      //cout << "Unable to open the file named " << fileName << endl;
      exit (1);
    }
    string line;
    vector<string> gradeBook;
    while(true) {
        getline(infile, line);
        split(line, " ", gradeBook);
        if (infile.eof()) {
          break;
       }
    }
    calculateGrade(gradeBook, fileNameOut);
}

int main(int argc, char const *argv[]) {
  if (argc == 1) {
      cerr << "Where's the file, idiot?" << endl;
      exit (1);
  }
  else if (argc == 2) {
    cerr << "Where am I outputting this to, Einstein?" << endl;
    exit (1);
  }
  getData(argc, argv[1], argv[2]);
  return 0;
}