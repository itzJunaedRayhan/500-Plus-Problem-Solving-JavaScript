//  Task:
/*
You need traverse dolls by using for loop. If element is "Hello Kitty" or "Barbie doll", 
you should push it to a bag(bag is an array, I've defined in the function); if it's other 
strings, we should use continue skip it.

When the bag has three element, bag is full. You should use break jump out the loop; 
If bag is not full, you should traverse dolls until the last element.
*/

function grabDoll(dolls) {
  var bag = [];
  //coding here
  for (let i = 0; i < dolls.length; i++) {
    if (dolls[i] === "Hello Kitty" || dolls[i] === "Barbie doll") {
      bag.push(dolls[i]);
    } else {
      continue;
    }

    //  Checking For bag has three element or not
    if (bag.length === 3) {
      break;
    } else {
      continue;
    }
  }
  return bag;
}
grabDoll(["Mickey Mouse","Hello Kitty","Hello Kitty","Barbie doll","Snow white"]);
grabDoll(["Mickey Mouse","Barbie doll","Hello Kitty","Hello Kitty","Hello Kitty","Snow white"]);
