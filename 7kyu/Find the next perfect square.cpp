#include <cmath>

long int findNextSquare(long int sq) {
    int test;
    test = sqrt(sq);
    long int answer;
    if(pow(test,2) == sq)
      {
        answer = test+1;
        answer = pow(answer,2);
        return answer;
      }
    else
  return -1;
}