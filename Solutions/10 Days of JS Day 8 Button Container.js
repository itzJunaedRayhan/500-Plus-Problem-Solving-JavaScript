let btn5 = document.getElementById('btn5');
let nums = [1, 2, 3, 6, 9, 8, 7, 4];

btn5.onclick=function() {
    nums.unshift(nums.pop());
    
    document.getElementById('btn1').innerHTML = nums[0];
    document.getElementById('btn2').innerHTML = nums[1];
    document.getElementById('btn3').innerHTML = nums[2];
    document.getElementById('btn6').innerHTML = nums[3];
    document.getElementById('btn9').innerHTML = nums[4];
    document.getElementById('btn8').innerHTML = nums[5];
    document.getElementById('btn7').innerHTML = nums[6];
    document.getElementById('btn4').innerHTML = nums[7];
}