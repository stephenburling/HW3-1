/****
* PSEUDOCODE:
*
*/
#include <iostream>

using std::cout;
using std::string;
using std::endl;

bool DogishHelper(string word, char letter){

if(word == "") {
return false;
}
cout << word << endl;
if(word[0] == letter) {

//cout << "Word " << word << " contains the letter: " << letter << endl;

  return true;

  } 
  else {
      return DogishHelper(word.substr(1,word.length()), letter);
  }
}

bool InXish(string input, string secondInput){


  cout << "Checking if word " << input << " has letter " << secondInput[0] << endl;

    char letterNeeded = secondInput[0];

    if(DogishHelper(input, letterNeeded)){

    cout << "Word " << input << " has letter " << secondInput[0] << endl;

    int letterLocation = input.find(secondInput[0]);
    int wordLength = secondInput.length();
    string newText = input.substr((letterLocation + 1), input.length());
      if(secondInput.length() > 1){

      string newWord = secondInput.substr(1,wordLength);
      cout << "New word to search for: " << newWord << endl;

      return InXish(newText, newWord);

        }else{
          return true;
        }

    }else{

      cout << "Word " << input << " does NOT have letter " << secondInput[0] << endl;

      return false;

    }

return true;

}

bool InDogish(string input){

    return InXish(input,"dog");

}

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