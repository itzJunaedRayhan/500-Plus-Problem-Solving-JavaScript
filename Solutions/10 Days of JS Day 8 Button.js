let btn = document.getElementById("btn");
let value = parseInt(btn.innerHTML);
btn.addEventListener("click",function() {
    btn.innerHTML = value++;
});