using namespace std;
//.h files only declare the functions, classes, variables, etc. that will be defined in the .cpp file 
class Fraction {
    //By default, classes are private. But we will declare what is private and public.
    private:
        int num; //Numerator
        int den; //Denominator
    public:
        Fraction(int top, int bottom); //Constructor
        //These are methods
        /*The difference between methods and functions is that methods are within a class,
        functions are outside of a class*/
        int getNum() const; //Const means I am promising not to change anything
        int getDen() const; //Same here

        //The friend keyword grants special access to functions and classes and things that are private
        friend ostream &operator << (ostream &stream, const Fraction &other);

        //Here you are overriding the addition, subtraction, multiplication, and division operators!
        Fraction operator+(const Fraction & other) const;
        Fraction operator-(const Fraction & other) const;
        Fraction operator*(const Fraction & other) const;
        Fraction operator/(const Fraction & other) const;
        bool operator == (Fraction &other) const;
};