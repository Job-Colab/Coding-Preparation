const lastStoneWeight = (stones) => {
  if (stones.length == 0) {
    return 0;
  }
  let sortedStones = stones.sort((a, b) => a - b);
  while (sortedStones.length > 1) {
    let largestStone = sortedStones.pop();
    let secondLargestStone = sortedStones.pop();
    sortedStones.push(largestStone - secondLargestStone);
    sortedStones.sort((a, b) => a - b);
  }
  //   console.log(sortedStones);
  //   largestStone = undefined;
  //   secondLargestStone = undefined;
  return sortedStones[0];
};

var stones = [2, 7, 4, 1, 8, 1];
console.log(lastStoneWeight(stones));
