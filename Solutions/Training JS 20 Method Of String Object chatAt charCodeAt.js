function topSecret(str){
    let dict = ['a', 'b', 'c', 'd','e', 'f', 'g', 'h', 'i','j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r','s', 't', 'u', 'v', 'w', 'x', 'y','z'];

    let Dict = ['A', 'B', 'C', 'D','E', 'F', 'G', 'H', 'I','J', 'K', 'L', 'M', 'N', 'O', 'P',
    'Q', 'R','S', 'T', 'U', 'V', 'W', 'X', 'Y','Z'];

    return str.replace(/[a-z]/gi,v=>{
        if (v===v.toLowerCase()){
        return dict.indexOf(v.toLowerCase())-3<0? dict[dict.indexOf(v.toLowerCase())-3+26]
        :dict[dict.indexOf(v.toLowerCase())-3]}
        if (v===v.toUpperCase()){
        return Dict.indexOf(v)-3<0? Dict[Dict.indexOf(v)-3+26]
        :Dict[Dict.indexOf(v)-3]}
        return v
    });
}
//question1: The top secret file number is...
const answer1="3745";
//question2: Super agent's name is...
const answer2="RILc";
//question3: He stole the treasure is...
const answer3="Expired biscuits";