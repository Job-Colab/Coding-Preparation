function multiplyMatrices(matrix1, matrix2) {
  var result = [];
  for (var i = 0; i < matrix1.length; i++) {
    console.log("I", i);
    result[i] = [];
    for (var j = 0; j < matrix2[0].length; j++) {
      console.log("J", j);

      var sum = 0;
      for (var k = 0; k < matrix1[0].length; k++) {
        console.log("k", k, i);

        sum += matrix1[i][k] * matrix2[k][j];
      }
      result[i][j] = sum;
    }
  }
  return result;
}

var Answer = multiplyMatrices(matrix1, matrix2);

console.log(Answer);
