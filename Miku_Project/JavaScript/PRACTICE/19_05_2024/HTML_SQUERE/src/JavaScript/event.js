/**
 * три квадрата разного цвета и один без цвета. при нажатии на цветной квадрат, 4й окрашивается в его цвет
 * три квадрата разного цвета при нажатии на каждый увет меняется на синий
 * один квадрат при нажатии меняется размер в два раза
 * три квадрата при проведении мышкой цвет меняется
 * три квадрата для каждого 3 вида собвтий для каждого типа события выводится в квадрате текст и цвет
 */

// 1

var square1 = document.getElementById('square1');
var square2 = document.getElementById('square2');
var square3 = document.getElementById('square3');
var square4 = document.getElementById('square4');


// цвет
function getBackgroundColor(element) {
    return window.getComputedStyle(element).backgroundColor;
}


function updateEventDisplay(event) {
    let evem = event.target;

    // если evem = square* - применяем его цвет на 4-й
    if(evem == square1 || evem == square2 || evem == square2 || evem == square3) {
        square4.style.backgroundColor = getBackgroundColor(evem);
        // console.log('Цвет фона кликнутого элемента:', getBackgroundColor(evem));
    }
}


square1.addEventListener('click', updateEventDisplay);
square2.addEventListener('click', updateEventDisplay);
square3.addEventListener('click', updateEventDisplay);

// -------------------------------------------------



