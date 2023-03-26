#include<iostream>
using namespace std;

int sum(int x, int y){
    return x+y;
}

float pi = 3.14; // Value is changed by the main.cpp
void print_pi() {
    cout << "Inside math.cpp, pi = " << pi << endl;
}