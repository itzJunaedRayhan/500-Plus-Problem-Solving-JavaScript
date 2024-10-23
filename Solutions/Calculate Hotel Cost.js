//  For Calculate the Hotel cost
function hotelCost(days){
    var cost = 0;
    if( days <= 0){
        return "please give a valid Number";
    }else if( days <= 10){
        cost = Math.floor(days) * 100;
    }else if( days <= 20){
        var FirstTenDaysCost    = 10 * 100;
        var RestOfDays          = Math.floor(days) - 10;
        var SecondTenDaysCost       = RestOfDays * 80;
        cost    = FirstTenDaysCost + SecondTenDaysCost;
    }else{
        var FirstTenDaysCost    = 10 * 100;
        var SecondTenDaysCost   = 10 * 80;
        var RestOfDays          = Math.floor(days) - 20;
        var RestOfDaysCost      = RestOfDays * 50;
        cost    = FirstTenDaysCost + SecondTenDaysCost + RestOfDaysCost;
    }
    return cost;
}

var totallCost = hotelCost(25);
console.log('Totall Cost : ',totallCost);