var finalPrices = function (prices) {
  for (let i = 0; i < prices.length; i++) {
    for (let j = 1 + i; j < prices.length; j++) {
      if (prices[j] <= prices[i]) {
        prices[i] -= prices[j];
        break;
      }
    }
  }
  return prices;
};
