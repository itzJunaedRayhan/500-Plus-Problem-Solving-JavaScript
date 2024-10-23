//  Task:
/*
Coding in function cutCube. function accept 2 parameter: volume and n. volume is the volume of a cube. 
If we cut the cube into n block. please determine whether the length of the cube is an integer. 
return true or false.

For exmaple:
volume=27, it can be divided into 27 blocks, each small cube side length is 1
cutCube(27,27) should return true

volume=512, it can be divided into 8 blocks, each small cube side length is 4
cutCube(512,8) should return true

volume=512, it can be divided into 64 blocks, each small cube side length is 2
cutCube(512,64) should return true
*/

function cutCube(volume,n){
    //coding here...
    let a = Number.isInteger(Math.cbrt(n));
    let b = Number.isInteger(Math.cbrt(volume / n));
    return a & b ? true : false
}
cutCube(27,27)  //  True
cutCube(512,8)  //  True
cutCube(512,64) //  True
cutCube(256,8)  //  false
cutCube(27,3)   //  false