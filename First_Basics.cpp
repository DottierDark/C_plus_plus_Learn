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
        //int x;   //can be letters 
        //int _yz; //can be underscores   
        //int z40;//can be letters

    //things you can do
        // int x; //can be letters
        // int _yz; //can be underscores
        // int z40; //can be letters
        // int x1; //can be numbers
        // int x_1; //can be letters and underscores
        // int x_1_2; //can be letters and underscores
        // int x_1_2_3; //can be letters and underscores
        // int x_1_2_3_4; //can be letters and underscores
        // int x_1_2_3_4_5; //can be letters and underscores
        // int x_1_2_3_4_5_6; //can be letters and underscores
        // int x_1_2_3_4_5_6_7; //can be letters and underscores
        // int x_1_2_3_4_5_6_7_8_9_0_a_b_c_d_e_f; //can be letters and underscores

    //things you have to avoid
        // int 89; Should not be a number   
        // int a b; //Should not contain any whitespace    
        // int double;// C++ keyword CAN NOT BE USED  
        // int int; // C++ keyword CAN NOT BE USED
    
    // this is how to print a variable
    std::cout << thisIsAfloatVariable << std::endl;
    std::cout << thisIsAnIntVariable << std::endl;
    std::cout << thisIsACharVariable << std::endl;
    std::cout << thisIsABoolVariable << std::endl;
    std::cout << thisIsADoubleVariable << std::endl;
    std::cout << thisIsAStringVariable << std::endl;

    
    
    return 0;
}


    //Uncomment the lower int main2(){}

    // C program to demonstrate that constant variables can not
    // be modified


// #include <stdio.h>

// int main2()
// {
// 	const int var = 100;

// 	// Compilation error: assignment of read-only variable
// 	// 'var'
// 	var = 200;

// 	return 0;
// }

// //Output: Compilation error: assignment of read-only variable 'var'


