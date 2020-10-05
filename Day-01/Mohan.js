function multiplyMatrices(matrix1, matrix2) {
  var result = [];
  for (var i = 0; i < matrix1.length; i++) {
    // console.log("I", i);  //!Just for myself to know the values of i j and k
    result[i] = [];
    for (var j = 0; j < matrix2[0].length; j++) {
      //   console.log("J", j); //!Just for myself to know the values of i j and k

      var sum = 0;
      for (var k = 0; k < matrix1[0].length; k++) {
        // console.log("k", k, i); //!Just for myself to know the values of i j and k

        sum += matrix1[i][k] * matrix2[k][j];
      }
      result[i][j] = sum;
    }
  }
  return result;
}

var Answer = multiplyMatrices(matrix1, matrix2);

console.log(Answer);
