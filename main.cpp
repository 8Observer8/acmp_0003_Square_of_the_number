/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on November 3, 2013, 11:41 AM
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**
 * The square of the number
 * 
 * @param number The number
 * @return The square of the number
 */
double square(double number) {
    return number * number;
}

int main(int argc, char** argv) {
    ifstream in;
    string inFileName = "input.txt";
    in.open(inFileName.c_str());
    if (!in.is_open()) {
        cerr << "Error: could not open file: " << inFileName.c_str() << endl;
        return 1;
    }
    
    double number;
    double result;
    if (in >> number) {
        result = square(number);
    } else {
        cerr << "Error: incorrect data in the file: " << inFileName.c_str() << endl;
        return 1;
    }
    
    ofstream out;
    string outFileName = "output.txt";
    out.open(outFileName.c_str());
    if (!out.is_open()) {
        cerr << "Error: could not open file: " << outFileName.c_str() << endl;
        return 1;
    }
    
    out.precision(0);    
    out << fixed;
    out << result << endl;

    return 0;
}

