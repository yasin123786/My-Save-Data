let hourHand = document.getElementById("hourHand");
let minuteHand = document.getElementById("minuteHand");
let secondHand = document.getElementById("secondHand");

setInterval(() => {
    let currentTime = new Date();
    let hours = currentTime.getHours();
    let minutes = currentTime.getMinutes();
    let seconds = currentTime.getSeconds();
    hourHand.style.transform = `rotate(${30*hours + minutes/2}deg)`;
    minuteHand.style.transform = `rotate(${6*minutes}deg)`;
    secondHand.style.transform = `rotate(${6*seconds}deg)`;
}, 1000);