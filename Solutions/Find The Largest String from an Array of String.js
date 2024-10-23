//  For Find The Largest Name
var Names = ['Junaed Islam', 'Ragnar Lothbrok', 'Rafi', 'Bappy Rehman', 'NH Pahel', 'Foysol', 'Imran'];
function LargestString(Names){
    //  For Loop For checking Elements of array are STRING or NOT
    for ( var i=0; i< Names.length; i++ ) {
        if (typeof Names[i] != "string")
            return 'Please Put A String as a Name';
    };
    var NameLength = 0;
    var LongestName = Names[0];
    for(i = 0; i < Names.length; i++){
        var element = Names[i].length;

        if(element > NameLength){
            var NameLength = element;
            LongestName = Names[i];
        }
    }
    return LongestName;
}

var str = LargestString(Names)
console.log('Largest Name is : ',str);