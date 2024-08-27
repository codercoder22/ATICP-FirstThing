#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){
    //argc is the number of strings given to this program
    //argv is the array of strings
    cout<<"Hello, World!"<<endl;
    //This is a comment
    /*
    This is a multiiline comment
    */
   int x = 3;
   cout<<"The number x is "<<x<<endl;
   int y;
   cout<<"Please enter a number of y: ";
   cin>>y;
   cout<<"The number y is "<<y<<endl;
   /*Data types in C++ are:
        int, float, double, bool, and char
   */
  int a;
  cout<<"The value of a is "<<a<<endl;

  //You can convert a double to an int without casting
  double b = 5.3;
  int c = b;
  cout << "b is: " << b << endl << "c is " << c << endl;

  string name = "Aniket Joshi"; //Strings startwith a lowercase unlike Java
  cout << "My name is " << name << endl;
  //Strings work as you think they do. You can look up the functions for them when it matters.
  //We have arguments. Don't worry about the syntax, but know this is how you use this.
  cout << "You gave " << argc << " arguments and they are:" << endl;
  for (int i = 0; i < argc; i++) {
     cout << argv[i] << endl;
  }
  //Arguments are things you input along with the program
  //Most of the time you will take command line arguments instead of cin
  //The thing above is an array. Never use arrays, you should vectors instead
  //Here's why:
  int daArray[] = {2,4,6,8};
  cout << "Number at position two is " << daArray[2] << endl;
  cout << "Number at position 4 is " << daArray[4] << endl;
  //When going out of bounds, arrays generate a random number stored in your memory, so don't use them. Very dangerous!
  //C++ does not do error checking, nor can you check for the size.
  //When you make an array, C++ allocates that amount of memory. End of story.

  //Vectors are like ArrayList, add them with #include <vector>
  vector<int> foo; //Vector called foo
  foo.push_back(53); //Adds the number 53
  foo.push_back(5);
  foo.push_back(7);
  cout << foo.size() << endl; //Gets the size of a vector
  cout << foo[0] << endl; //Access like a vector (get the value like an array)
  foo.pop_back(); //Gets rid of the last item
  foo[0] = 2; //Changes the value at position 0 to 2
  for(int i = 0; i < foo.size(); i++) {
     cout << foo[i] << endl;
  }
  //There will be an error because foo.size() can't be negative.
  return 0;
}