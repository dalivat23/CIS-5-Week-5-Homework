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

  // score > 70 (Just Below Chain Value : 70 | Exactly On Chain Value : 70 | Just Above Chain Value : 71)
  // score <= 100 (Just Below Chain Value : 99 | Exactly On Chain Value : 100 | Just Above Chain Value : 101)
  bool hscore = 70 < score && score <= 100;
 
  // attendance > 70 (Just Below Chain Value : 70 | Exactly On Chain Value : 70 | Just Above Chain Value : 71)
  // attendance <= 100 (Just Below Chain Value : 99 | Exactly On Chain Value : 100 | Just Above Chain Value : 101)
  bool gattendance = 70 < attendance && attendance <= 100;

  
  // Invalid Chain first in order to check for out of range values so those invalid values are not processed in the other branches 
  // score < 0 || score > 100 (Just Below Chain Value : -1 | Exactly On Chain Value : 0 & 100 | Just Above Chain Value : 101)
  if (score < 0 || score > 100 && attendance < 0 || attendance > 100)
	  cout << "INVALID - Score and Attendance not valid values";
  else if (score < 0 || score > 100)
  {
	  cout << "INVALID - Score not a valid value";
  }
  else if (attendance < 0 || attendance > 100)
  {
	  cout << "INVALID - Attendance not a valid value";
  }
  
  
  
  // Use of && instead of || to check for both conditions being met for the best outcome and instead of just one being met for the best outcome
  else if (hscore && gattendance)
  {
	  cout << "PASS - Meets all requirements";
  }
  else if (hscore || !gattendance)
  {
	  cout << "WARNING - low attendance";
  }
  else
  {
	  cout << "FAIL - Does not meet requirements";
  }

  return 0;
}
