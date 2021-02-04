# text-game
#include <iostream>
#include <string>
using namespace std;


int main() {
int room = 1;
char input;

while (input != 'q'){
switch(room){

  
  case 1:
  cout<<"you're in your bedroom\n";
  cout<<"you can go north\n";
  cin>>input;

  if (input == 'n'){
  room = 2;}
  
  break;

  case 2:
  cout<<"you're in the living room you can keep going north or go west to the second bedroom\n";
  cout<<"you can also go back for what ever reason\n";
  cin>>input;

    if (input == 'n'){
    room = 3;}
    else if (input == 'w'){
      room = 4;}
    else if (input == 's'){
      room = 1;}
      break;
    
    case 3:
    cout<<"you're in the dining room you can keep going north or east and even back south\n";
    cin>>input;

    if (input == 'n'){
    room = 5;}
    else if (input == 'e'){
      room = 6;}
    else if (input == 's'){
      room = 2;}
    break;

    case 4:
    cout<<"you're in the second bedroom you can only go back east\n";
    cin>>input;

    if (input == 'e'){
      room = 2;}
    break;

    case 5:
    cout<<"you're in the kitchen you can go back to the dining room toward south\n";
    cin>> input;

    if (input == 's'){
      room = 3;}
    break;

    case 6:
    cout<<"you're in the bathroom take as long as you need you can go back to the dining room towards west\n";
    cin>>input;

    if (input == 'w'){
      room = 3;}
}
}
}
