const encryptString = (string, rotation) => {
  let code;
  let newChar = "";
  var check;

  if (rotation > 26) {
    rotation = rotation % 26;
  }

  function isLowerCase(char) {
    if (char == char.toLowerCase()) {
      return true;
    }
  }

  for (let char of string) {
    code = char.charCodeAt();
    code += rotation;

    if ((check = /[^a-zA-Z]/.test(char))) {
      newChar += char;
      continue;
    }

    if (code > 90 && code <= 122 && isLowerCase(char)) {
      newChar += String.fromCharCode(code);
    } else if (code > 97 && isLowerCase(char)) {
      newChar += String.fromCharCode(code - 26);
    } else if (code > 90 && !isLowerCase(char)) {
      newChar += String.fromCharCode(code - 26);
    } else if (code < 90 && !isLowerCase(char)) {
      newChar += String.fromCharCode(code);
    } else {
      newChar += String.fromCharCode(code);
    }
  }
  return newChar;
};

console.log(encryptString("AA-PP-KK", 62));
