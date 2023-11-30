#pragma once
#include <iostream>

using namespace std;

struct array_str {
    int size;
    int* array;
    array_str(int sz, int* arr) : size(sz), array(arr) {}
};

struct OutOfRangeError {
    string functionName;
    string paramName;
    string paramValue;
    string customError;
    OutOfRangeError(string fName, string pName, string pValue, string cError) : functionName(fName), paramName(pName), paramValue(pValue), customError(cError) {}
};

void printArray(const array_str&);
void reverseArrayInStruct(const array_str& source, array_str& dest);
