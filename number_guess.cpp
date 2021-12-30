#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;


int main(){
cout << "WELCOME TO RANDOM NUMBER GUESSING GAME" << endl;
cout << "****************************************************" << endl;
for (int i = 0; i < 10000000; i++){
int secret_num;
int guess;
// initialize random seed
  srand (time(NULL));

//  generate secret number between 1 and 10
  secret_num = rand() % 10 + 1;

cout << "Enter a number between 1 - 10 for guessing: ";
cin >> guess;
cout << endl;

if (guess == secret_num){
    cout << "Congratulations -- you guessed the number correct";
    break;
}

if (guess < secret_num){
    cout << "Wrong number -- guess higher";
    cout << endl;
}

if (guess > secret_num){
    cout << "Wrong number -- guess lower";
    cout << endl;
}

}

    return 0;
}
