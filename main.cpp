#include <iostream>
#include "hw3.h"

using std::cout;
using std::string;
using std::endl;

int main() {
  //Test ReverseArray();

    //cout << DogishHelper("gadgdks",'d') << endl;
  int arr[] = { 1, 3, 3, 4, 5, 2,7};
  int length = 7;
	ReverseArray(arr, length);

	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
  }

//Test HasBalancedParentheses();
 string statement1 = "((())())";
 If(HasBalancedParentheses(statement1)){
   	cout << "Parentheses are Balanced: " << endl;
}
/*
// Test InDogish();
 string mydogs = "dpoags";
 If(InDogish(mydogs)){
   	cout << "Part of Dogish? " << endl;
 }

 // Test bool InXish(sting mytext, sting myword);
*/
}


