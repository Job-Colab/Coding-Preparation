class Solution {
  constructor(numbers) {
    this.numbers = numbers;
  }

  solveForMinimum() {
    let num = [];
    for (let i = 0; i < this.numbers.length; i++) {
      this.numbers[i] === i ? num.push(this.numbers[i]) : false;
    }
    if (num.length == 0) {
      return -1;
    } else {
      return Math.min(...num);
    }
  }
}

const answer = new Solution([-5, 1, 0, 3, 4]);
const result = answer.solveForMinimum();
console.log(result);
