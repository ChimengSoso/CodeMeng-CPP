/**
--Sample Input:
4
1 2 3 1
2 3 2 2
2 3 1 2
3 1 2 1

--Sample Output:
sum of row 0: 7
sum of row 1: 9
sum of row 2: 8
sum of row 3: 7
sum of col 0: 8
sum of col 1: 9
sum of col 2: 8
sum of col 3: 6
sum of diagonal left: 6
sum of diagonal right: 9

*/

#include <stdio.h>

int main() {
  // input
  int n;
  scanf("%d", &n);
  int matrix[n][n];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // process initialization
  int srow[n], scol[n];
  int sleft = 0, sright = 0;
  for (int i = 0; i < n; ++i)
    srow[i] = scol[i] = 0;

  // process sum of each row
  for (int r = 0; r < n; ++r) {
    for (int c = 0; c < n; ++c)
      srow[r] += matrix[r][c];
  }

  // output sum of each row
  for (int r = 0; r < n; ++r)
    printf("sum of row %d:"
           " %d\n", r, srow[r]);

  // process sum of each column
  for (int c = 0; c < n; ++c) {
    for (int r = 0; r < n; ++r)
      scol[c] += matrix[r][c];
  }

  // output sum of each column
  for (int c = 0; c < n; ++c)
    printf("sum of col %d:"
           " %d\n", c, scol[c]);

  // process sum of diagonal left
  for (int i = 0; i < n; ++i)
    sleft += matrix[i][i];

  // output sum of diagonal left
  printf("sum of diagonal "
         "left: %d\n", sleft);

  // process sum of diagonal right
  for (int i = 0; i < n; ++i)
    sright += matrix[i][n - 1 - i];

  // output sum of diagonal right
  printf("sum of diagonal "
         "right: %d\n", sright);

  return 0;
}
