const computeFine = (cars, penalties, date) => {
  let fine = 0;
  if (!(date & 1)) {
    cars.forEach((car, index) => (car & 1 ? (fine += penalties[index]) : ""));
    return fine;
  } else {
    cars.forEach((car, index) =>
      !(car & 1) ? (fine += penalties[index]) : ""
    );
    return fine;
  }
};

const cars = [2222, 2223, 2224];
const penalties = [200, 300, 400];
const date = 8;

const result = computeFine(cars, penalties, date);
console.log(result);
