//  Task:
/*
Coding in function colorOf. function accept 3 parameter:r g b. It means value of color 
red green and blue. the value range is 0-255.

Use toString(16) Convert numbers r g b to hex string form. at last, combine them to a 
web color code and return it.

the color code should starting with "#". and then use 2 characters per color.
*/

function colorOf(r,g,b){
    //coding here
    let R = r.toString(16);  
    let G = g.toString(16);
    let B = b.toString(16);
    
    if (R.length < 2) {
      R = '0' + R;
    }
    
    if (G.length < 2) {
      G = '0' + G;
    }
    
    if (B.length < 2) {
      B = '0'+ B;
    }

    return `#${R}${G}${B}`;
}

colorOf(255,0,0);
colorOf(0,111,0);
colorOf(1, 2 ,3);