/**
--Sample Input:
6 8
-7 2 8 -3 0 4 -9 5
11 32 8 51 -1 0 1 2
1 52 -2 -7 -3 -7 35 4
-1 10 -3 -1 -7 -9 4 -3
4 3 -5 2 -1 -20 6 12
40 52 -1 80 0 7 -5 3
2
0 1 3 4
4 2 2 5

--Sample Output:
52
2

*/

#include <stdio.h>

int main() {
  int N, M;
  scanf("%d%d", &N, &M);
  int A[N][M];
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      scanf("%d", &A[i][j]);
    }
  }
  int Q;
  scanf("%d", &Q);
  while (Q--) {
    int r1, c1, r2, c2;
    scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
    int left = c1 < c2 ? c1 : c2;
    int right = c1 + c2 - left;
    int top = r1 < r2 ? r1 : r2;
    int bottom = r1 + r2 - top;
    int max_sub = A[top][left];
    for (int i = top; i <= bottom; ++i) {
      for (int j = left; j <= right; ++j) {
        if (A[i][j] > max_sub) {
          max_sub = A[i][j];
        }
      }
    }
    printf("%d\n", max_sub);
  }
  return 0;
}
