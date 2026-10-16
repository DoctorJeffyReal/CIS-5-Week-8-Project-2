#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 70; 

// Project 2 — Jesus
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
  const int N = 30;
  int scores[N];
  const int scoreAt10 = 90; 

  srand(static_cast<unsigned>(time(nullptr)));

  const int scoreAt20 = 50; // change this number

  for (int i = 0; i < N; ++i) {
    scores[i] = rand() % 100;
  }

  scores[0] = scoreAt0;
  const int scoreAt27 = 30; 
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;

  // TODO: print each index and scores[i]
  for (int i = 0; i < N; ++i) {
    std::cout << "Index " << i << ": " << scores[i] << '\n';
  }
  // TODO: one for loop. Count A, B, C, D, and failing.
  // 90 and up is A. 80 to 89 is B. 70 to 79 is C. 60 to 69 is D.
  // Below 60 is failing. A score of 60 is a D.
  int a = 0, b = 0, c = 0, d = 0, f = 0;
  
  for (int i = 0; i < N; ++i) {
    if (scores[i] >= 90) {
      ++a;
    } else if (scores[i] >= 80) {
      ++b;
    } else if (scores[i] >= 70) {
      ++c;
    } else if (scores[i] >= 60) {
      ++d;
    } else {
      ++f;
    }
  }


  std::cout << "A: " << a << '\n';
  std::cout << "B: " << b << '\n';
  std::cout << "C: " << c << '\n';
  std::cout << "D: " << d << '\n';
  std::cout << "F: " << f << '\n';

  // TODO: one while loop. If scores[i] is under 60,
  // Student at index i needs to come to office hours.
  
    int i = 0;
    while (i < N) {
if (scores[i] < 60) {
std::cout << "Student at index " << i 
    << " needs to come to office hours." << '\n';
  }
        ++i;
    }
  return 0;
}
