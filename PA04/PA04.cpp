#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <Fraction.h>
using namespace std;
int main(int argc, char const *argv[]) {
    Fraction foo(3,4);
    Fraction fooTwo(1,2);
    cout << foo+fooTwo << endl;
    cout << foo-fooTwo << endl;
    cout << foo*fooTwo << endl;
    cout << foo/fooTwo << endl;
    cout << (foo == fooTwo) << endl;
}