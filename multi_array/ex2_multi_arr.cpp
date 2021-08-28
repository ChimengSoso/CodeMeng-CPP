/**
--Sample Input:
2 3 4
1 2 3
4 5 6
7 8 0 9
1 2 3 3
4 5 1 6

--Sample Output:
21 27 9 33
57 72 21 87

*/

#include <stdio.h>

int main() {
  // Input
  int P, Q, R;
  scanf("%d%d%d", &P, &Q, &R);
  int A[P][Q];
  for (int i = 0; i < P; ++i) {
    for (int j = 0; j < Q; ++j)
      scanf("%d", &A[i][j]);
  }
  int B[Q][R];
  for (int i = 0; i < Q; ++i) {
    for (int j = 0; j < R; ++j) {
      scanf("%d", &B[i][j]);
    }
  }

  // Processing
  int C[P][R];
  for (int i = 0; i < P; ++i) {
    for (int j = 0; j < R; ++j) {
      C[i][j] = 0;
      for (int k = 0; k < Q; ++k) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  // Output
  for (int i =0 ; i < P; ++i) {
    for (int j = 0; j < R; ++j) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
