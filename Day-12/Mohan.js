const twins = [10, 10, 10, 20, 20, 10, 20];
const count = {};
let totalCount = 0;
const reducer = (count, nextPair) => {
  if (nextPair in count) {
    count[nextPair]++;
  } else {
    count[nextPair] = 1;
  }
  return count;
};
const twinsCount = twins.reduce(reducer, count);

for (let element in twinsCount) {
  if (!(twinsCount[element] & 1)) {
    totalCount += twinsCount[element];
  } else {
    totalCount = totalCount + --twinsCount[element];
  }
}
console.log(totalCount);
