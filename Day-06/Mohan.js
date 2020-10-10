(function () {
  let array = [1, 3, 4, 5, 4, 1, 3];
  const result = array.reduce(
    (accumulator, currentvalue) => accumulator ^ currentvalue
  );
  console.log(result);
})();
