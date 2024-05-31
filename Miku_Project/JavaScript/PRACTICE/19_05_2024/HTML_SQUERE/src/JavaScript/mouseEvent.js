container.onmouseover = container.onmouseout = handler;
var square1One = document.getElementById('square1One');
var square2Two = document.getElementById('square2Two');
var square3Tree = document.getElementById('square3Tree');
var square4For = document.getElementById('square4For');


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

  if (event.type == 'mouseover') {
    event.target.style.background = 'pink'
  }
  if (event.type == 'mouseout') {
    event.target.style.background = ''
  }

}

function updateEventDisplay(event) {
    let evem = event.target;

    if(evem == square1One || evem == square2Two || evem == square3Tree || evem == square4For) {
        square4For.style.backgroundColor = getBackgroundColor(evem);
        // console.log('Цвет фона кликнутого элемента:', getBackgroundColor(evem));
    }
}
square1One.addEventListener('mouseover', updateEventDisplay);
square2Two.addEventListener('mouseover', updateEventDisplay);
square3Tree.addEventListener('mouseover', updateEventDisplay);

