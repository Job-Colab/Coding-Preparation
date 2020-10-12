const longestCommonPrefix = (strings) => {
  var commonPrefix = "";
  if (strings.length == 0) return commonPrefix;
  for (let i = 0; i < strings[0].length; i++) {
    for (let j = 1; j < strings.length; j++) {
      if (strings[0][i] != strings[j][i]) {
        return commonPrefix;
      }
    }
    commonPrefix += strings[0][i];
  }
  return commonPrefix;
};

console.log(longestCommonPrefix(["flower", "flow", "flights"]));
