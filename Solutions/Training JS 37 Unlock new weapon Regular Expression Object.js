//  Task:
/*
Coding in function countAnimals. function accept two parameters: animals, a string contains some animals;
count, an array list of which animals we should count. The result should be a number array.

Example:
countAnimals("dog,cat",["dog","cat"]);          //  => [1,1]
countAnimals("dog,cat",["dog","cat","pig"]);    //  => [1,1,0]
countAnimals("dog,dog,cat",["dog","cat"]);      //  => [2,1]
countAnimals("dog,dog,cat",["pig","cow"]);      //  => [0,0]
*/

function countAnimals(animals,count){
    let result = [];
    for (let i = 0; i < count.length; i++) {
      result.push(animals.split(count[i]).length-1);
    }
    return result;
}
countAnimals("dog,cat",["dog","cat"]);
countAnimals("dog,cat",["dog","cat","pig"]);
countAnimals("dog,dog,cat",["dog","cat"]);
countAnimals("dog,dog,cat",["pig","cow"]);