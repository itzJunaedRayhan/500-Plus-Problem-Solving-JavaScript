//  Task:
/*
[123,456,789,1 2,3 4,5 6,78]
3+4 6+7 9+1 2+3 4+5 6+7  
 |   |   |   |   |   |
[7 ,13 ,10 , 5 , 9 ,13]
And then, Calculate their product and return it(7x13x10x5x9x13=532350)

So, tailAndHead([123,456,789,12,34,56,78]) should return 532350
*/

function tailAndHead(arr){
    let result=[];
    for(let i = 0; i < arr.length-1; i++) {
        result.push(arr[i]%10+Number((arr[i+1]+'')[0]))
    }
    return result.reduce((a,b)=>a*b)
}

tailAndHead([123,456,789,12,34,56,78]);