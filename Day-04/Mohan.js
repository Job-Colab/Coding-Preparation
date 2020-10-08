const findIndex = (inputElements, target) => {
  let output = [];
  for (let i = 0; i < inputElements.length; i++) {
    for (let j = 1 + i; j < inputElements.length; j++) {
      if (inputElements[i] + inputElements[j] == target) {
        output.push(i, j);
        return output;
      } else {
        continue;
      }
    }
  }

  if (output.length != -1) {
    console.log("Array has no matching elements to add for target");
    return output;
  }
};

const inputElements = [2, 7, 11, 15];
const target = 9;

console.log(findIndex(inputElements, target));
