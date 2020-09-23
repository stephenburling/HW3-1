#ifndef HW3_H
#define HW3_H

#include <iostream>

using std::string;

void ReverseArray(int list[], int length);

bool HasBalancedParentheses(string input);

bool InDogish(string input);

bool DogishHelper(string input, char letter);

bool InXish(string input, string secondInput);

#endif // HW3_H