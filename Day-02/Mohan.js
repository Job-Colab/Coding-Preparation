"use-strict";

const inputElements = [3, 2, 4, 6, 7, 5, 8, 0, 1];
let oddElements = [];

const oddNumber = (input) => {
  input.forEach((element) => {
    element & 1 ? oddElements.push(element) : null;
  });
};
oddNumber(inputElements);

const sumOfOdd = (odd) =>
  odd.reduce((prevElement, currentElment) => prevElement + currentElment, 0);

const result = sumOfOdd(oddElements);
console.log(result);
