#include <iostream>

int main() {
    //this is how you print a plain string of Hello World!
    std::cout << "Hello World!" << std::endl;

    // the next lines are how to declaring Variables
    float thisIsAfloatVariable;
    int thisIsAnIntVariable;
    char thisIsACharVariable;
    bool thisIsABoolVariable;
    double thisIsADoubleVariable;
    std::string thisIsAStringVariable;

    // this is how to assign a value to a variable
    thisIsAfloatVariable = 3.14;
    thisIsAnIntVariable = 5;
    thisIsACharVariable = 'a';
    thisIsABoolVariable = true;
    thisIsADoubleVariable = 3.14159265359;
    thisIsAStringVariable = "Hello World!";

    //extra rules in variable declaration you can do:
    int x;   //can be letters 
    int _yz; //can be underscores   
    int z40;//can be letters

    //things you have to avoid
        // int 89; Should not be a number   
        // int a b; //Should not contain any whitespace    
        // int double;// C++ keyword CAN NOT BE USED  

    
    return 0;
}