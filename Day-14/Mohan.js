const isToeplitzMatrix = (matrix) => {
  let rowLength = matrix.length;
  let colLength = matrix[0].length;
  let i, j;

  for (i = 0; i < rowLength - 1; i++) {
    for (j = 0; j < colLength - 1; j++) {
      if (matrix[i][j] != matrix[i + 1][j + 1]) {
        return false;
      }
    }
  }
  return true;
};
