#include <iostream>
#include <string>
using namespace std;

int main() {
  //makes a string of the alphabet
  string alphabetString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the text string is: " << alphabetString.length() << endl;
  cout << "first letter is "<< alphabetString[0]<< endl;
  //array of alphabet
  //for each i value, a single letter string is set equal to array value
  string alphabetArray[26];
  for (int i = 0; i < alphabetString.length(); i++){
  alphabetArray[i]=alphabetString[i];
  }
  cout << "first letter of array is  "<< alphabetArray[0]<< endl;
  cout << "last letter of array is  "<< alphabetArray[25]<< endl;
  return 0;
}
