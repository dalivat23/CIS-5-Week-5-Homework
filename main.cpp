#include <iostream>

using std::cout;
using std::cin;

// Homework 5 — Tristan Daliva
// CIS 5 Week 05 · Rule engine lite

int main() {
  int score = 0;
  int attendance = 0;

  cout << "Score out of 0-100? ";
  cin >> score;

  cout << "Attendance percentage? ";
  cin >> attendance;

  bool hscore = 70 < score && score <= 100;
  bool gattendance = 70 < attendance && <= 100;


  if (hscore && gattendance) cout << "uhhh test";
  else if (hscore) cout << "WARNING - low attendance";
  else if (gattendance) cout << "WARNING - low score";
  else cout << "yeah you didn't pass buster"; 
  // TODO: cout question, then cin, for score and for attendance

  // Edge values: (list just-below / exactly-on / just-above for each threshold here)

  // TODO: invalid branch FIRST — out-of-range input gets its own message
  //   if (score < 0 || score > 100) { ... }

  // TODO: else if ( ... && ... ) { ... }   best outcome
  // TODO: else if ( ... ) { ... }          middle outcome
  // TODO: else { ... }                     the rest

  // TODO: two comments that explain a choice (why invalid first, why && not ||, why >= not >)

  return 0;
}
