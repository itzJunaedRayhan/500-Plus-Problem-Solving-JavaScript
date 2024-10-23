//  Task:
/*
You need to the traverse the obj, if the length of the object key equals to 5, 
then push the key value to the array (you need to define the array by yourself, 
this time I won't help you). Additionally push the value to the array as well, 
if the length of the value is equal to 5.
*/

function giveMeFive(obj) {
  let arrOfKey = [];
  for (let key in obj) {
    if (key.length === 5) {
      arrOfKey.push(key);
    }
    if (obj[key].length === 5) arrOfKey.push(obj[key]);
  }
}
giveMeFive({ Our: "earth", is: "a", beautyful: "world" });
giveMeFive({Ihave:"enough", money:"to",buy:"a",car:"model"});
giveMeFive({Pears:"than",apple:"sweet"});
