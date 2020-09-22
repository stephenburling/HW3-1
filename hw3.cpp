/****
* PSEUDOCODE:
*
*/
#include <iostream>

using std::cout;
using std::string;
using std::endl;
/*
bool DogishHelper( string word, char letter){
 if(word == "") {
 return false;
    }
    cout << word << endl;
 if(word[0] == letter) {
     ///COMPLETE THIS TO HELP WITH RECURSION SETUP 
 
    } else {
 return DogishHelper(word.substr(1,word.length()), letter);
    }
}
*/
bool HasBalancedParentheses(string input){

string testString = input;
int counter = 0;
for(char character:input){
  cout << "Character : " << character <<endl;

  if(string(1,character) == "("){
    counter++;
    cout << "Counter equal to: " << counter << endl;
    }else if (string(1, character) == ")"){
      counter--;
          cout << "Counter equal to: " << counter << endl;

    }

  if(counter < 0){
    return false;
  }
}

if (counter == 0){
  return true;
}else {
  return false;
}
}

void ReverseArray(int list[], int length){
  for (int i = 0; i < length; i++) {

  int hotseat1 = list[i];
  int hotseat2 = list[(length -1) - i];

  list[i] = hotseat2;
  list[(length-1) - i] = hotseat1;

    if (i == ((length-1) / 2)){
      i = 10;
    }
	}

}