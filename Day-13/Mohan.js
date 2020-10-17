var removeElement = (nums, value) => {
  for (var i = nums.length; i >= 0; i--) {
    if (nums[i] === value) {
      nums.splice(i, 1);
    }
  }
  return nums.length;
};
