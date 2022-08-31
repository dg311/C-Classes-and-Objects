#include <iostream>
#include <string>
using namespace std;
class aClass {
  public:
    string doesItWork;
    int age;
    string myHobbies;
    string placesILikeToGo;
    string whatILikeToDoAtHome;
    int hobbyNumbers;
    int placeNumbers;
    int homeActivityNumbers;
};
int main() {
  aClass myFacts;
  myFacts.doesItWork = "Can you see this text? Does my code work?";
  myFacts.age = 11;
  myFacts.myHobbies = "I like basketball, tennis, coding, math, and chess.";
  myFacts.placesILikeToGo = "I like to go to arcades, tennis courts, and live sports matches.";
  myFacts.whatILikeToDoAtHome = "I like to code, play chess, and watch TV.";
  myFacts.hobbyNumbers = 5;
  myFacts.placeNumbers = 3;
  myFacts.homeActivityNumbers = 3;
  cout<<myFacts.doesItWork<<"\n"; 
  cout<<myFacts.age<<"\n";
  cout<<myFacts.myHobbies<<"\n"; 
  cout<<myFacts.placesILikeToGo<<"\n";
  cout<<myFacts.whatILikeToDoAtHome<<"\n"; 
  cout<<myFacts.hobbyNumbers<<"\n";
  cout<<myFacts.placeNumbers<<"\n"; 
  cout<<myFacts.homeActivityNumbers;
  return 0;
}
