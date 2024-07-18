//Memory Management
#include <cstring>
#include <iostream>
using namespace std;


//Main Function(Driver Code)
int main()
{
    //Variables
    int num = 5;
    float *ptr;

    //Memory Allocation OF num variable
    ptr = new float[num];

    for (int i = 0; i < num; i++){
        *(ptr + i) = i;
    }
    cout << "DISPLAY GPA of Students" << endl;
    for (int i = 0; i < num; i++){
        cout << "Student" << i+1 << ": " << *(ptr + i) << endl;
    }
    //PTR memory is released
    delete[] ptr;
    return 0;
}