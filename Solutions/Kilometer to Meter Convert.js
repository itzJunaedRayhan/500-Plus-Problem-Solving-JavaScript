//      Convert kilometer To Meter
function kilometerToMeter(kilometer){
    if(kilometer <= 0){
        return "please put a valid Number";
    }else{
        var meter = kilometer * 1000;
        return meter;
    }
}

var output = kilometerToMeter(6);
console.log('totall meter : ', output);