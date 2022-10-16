#include <stdio.h>
int main() {

  int i, n;
  int t1 = 0, t2 = 1;
  
  int nextTerm = t1 + t2;

  // taking terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;              // here we are assigning vale2 to the value 1
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
