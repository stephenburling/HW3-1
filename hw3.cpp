/****
DogishHelper(input, letter)
  if input is empty, return false
  if the first letter of the input word is equal to the letter requested
    return true
  else
    return bool call DogishHelper with input shortened by one letter
InXish(input, second_input)
  if DogishHelper(given text, first letter of word) is true,
    set integer letter_location to the first instance of the requested word
    set word_length to second_input length

*/
#include <iostream>

using std::cout;
using std::string;
using std::endl;

bool DogishHelper(string word, char letter){
  if (word == "") {
    return false;
  }
  if(word[0] == letter) {
    return true;
    } else {
    return DogishHelper(word.substr(1,word.length()), letter);
  }
}

bool InXish(string input, string second_input){

  if (DogishHelper(input, second_input[0])) {
    int letter_location = input.find(second_input[0]);
    int word_length = second_input.length();

    string new_text = input.substr((letter_location + 1), input.length());
    if (second_input.length() > 1) {
      string new_word = second_input.substr(1,word_length);
      return InXish(new_text, new_word);
    } else {
      return true;
      }
  } else {
      return false;
    }
  return true;
}

bool InDogish(string input){

  return InXish(input,"dog");

}

bool HasBalancedParentheses(string input){

  int counter = 0;  

  for(char character:input){

    cout << "Character : " << character <<endl;

    if (string(1,character) == "(") {
    counter++;
    cout << "Counter equal to: " << counter << endl;
    } else if (string(1, character) == ")") {
    counter--;
    cout << "Counter equal to: " << counter << endl;
    }

    if (counter < 0) return false;
  
    }

    if (counter == 0) {
      return true;
    } else {
      return false;
    }
}

void ReverseArray(int list[], int length){
  for (int i = 0; i < length; i++) {
    int hot_seat_one = list[i];

    int hot_seat_two = list[(length - 1) - i];

    list[i] = hot_seat_two;

    list[(length-1) - i] = hot_seat_two;

    if (i == ((length-1) / 2)) {
      i = 10;
    }
	}
}