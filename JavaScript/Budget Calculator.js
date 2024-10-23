//   Calculate total Budget to need buy those Electronics
function budgetCalculator(watch,phone,laptop){
    if(watch < 0){
        return "put a valid Number";
    }else if(phone < 0){
        return "put a valid Number";
    }else if(laptop < 0){
        return "put a valid Number";
    }else{
        var watchPrice      =   Math.floor(watch) * 50;
		var phonePrice      =   Math.floor(phone) * 100;
		var laptopPrice     =   Math.floor(laptop) * 500;
		var totallPrice     =   watchPrice + phonePrice + laptopPrice;
		return totallPrice;
    }
}

var totall = budgetCalculator(4,5,10);
console.log('totall budget : ', totall);