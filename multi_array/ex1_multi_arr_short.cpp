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

  // process initialization
  int matrix[n][n];
  int srow[n], scol[n];
  int sleft = 0, sright = 0;
  for (int i = 0; i < n; ++i)
    srow[i] = scol[i] = 0;

  // process sum of all order
  for (int r = 0; r < n; ++r) {
    for (int c = 0; c < n; ++c) {
      scanf("%d", &matrix[r][c]); // also, input.
      srow[r] += matrix[r][c];
      scol[c] += matrix[r][c];
    }
    sleft += matrix[r][r];
    sright += matrix[r][n - 1 - r];
  }

  // output sum of each row
  for (int r = 0; r < n; ++r)
    printf("sum of row %d:"
           " %d\n", r, srow[r]);

  // output sum of each column
  for (int c = 0; c < n; ++c)
    printf("sum of col %d:"
           " %d\n", c, scol[c]);

  // output sum of diagonal left
  printf("sum of diagonal "
         "left: %d\n", sleft);

  // output sum of diagonal right
  printf("sum of diagonal "
         "right: %d\n", sright);

  return 0;
}
