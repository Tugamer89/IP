#pragma once
#include <iostream>

using namespace std;

struct OutOfRangeError {
    string functionName;
    string paramName;
    string paramValue;
    string customError;
    OutOfRangeError(string fName, string pName, string pValue, string cError) : functionName(fName), paramName(pName), paramValue(pValue), customError(cError) {}
};

void reverse(int* source, int* dest, int size);
