//working of auto keyword

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Variables
    auto an_int = 26;
    auto a_bool = false;
    auto a_float = 26.24;
    auto ptr = &a_float;
    
    //Print typeid
    cout << typeid(an_int).name() << "\n";
    cout << typeid(a_bool).name() << "\n";
    cout << typeid(a_float).name() << "\n";
    cout << typeid(ptr).name() << "\n";
    return 0;
}