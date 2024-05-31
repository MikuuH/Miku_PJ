container.onmouseover = container.onmouseout = handler;

const squareIds = [
    "square1One",
    "square2Two",
    "square3Tree",
    "square4For"
]

const squares = squareIds.map(id => document.getElementById(id));

// цвет
function getBackgroundColor(element) {
    return window.getComputedStyle(element).backgroundColor;
}


function handler(event) {

  function str(el) {
    if (!el) return "null"
    return el.className || el.tagName;
  }

  log.value += event.type + ':  ' +
    'target=' + str(event.target) +
    ',  relatedTarget=' + str(event.relatedTarget) + "\n";
  log.scrollTop = log.scrollHeight;

}


function updateEventDisplay(event) {
    let evem = event.target;

    if(evem == square1One || evem == square2Two || evem == square3Tree || evem == square4For) {
        square4For.style.backgroundColor = getBackgroundColor(evem);
        // console.log('Цвет фона кликнутого элемента:', getBackgroundColor(evem));
    }
}

//тут gpt подсказал, как можно сделать код короче. Оригинал в event.js
squares.forEach(square => {
    square.addEventListener('mouseover', updateEventDisplay);

})
