const _24HourFormat = (time) => {
  const validation = /[AaPp][Mm]$/;
  const result = validation.exec(time).includes("pm");
  const colon = time.split(":");
  var hours = Number(colon[0]);
  var minutes = Number(parseInt(colon[1]));
  if (result === true && hours < 12) {
    hours += 12;
  } else if (result === false && hours == 12) {
    hours -= 12;
  } else if (result == false) {
    hours = hours;
  }

  return `${hours}:${minutes}`;
};

console.log(_24HourFormat("1:00pm"));
