var marginLeft = 0;
var marginTop = 0;

var square = document.getElementById('square1');

function handleKeyPress(event) {
    let key = event.key; // Получаем символ нажатой клавиши
    let keyCode = event.keyCode; // Код клавиши
    let keyInfo = `
        Нажатая клавиша: ${key} (Код: ${keyCode})
    `;
    document.getElementById("keyInfo").innerHTML = keyInfo;
    console.log(key);

    if (key === "ArrowRight") {
        marginLeft += 10;
    } else if (key === "ArrowLeft") {
        marginLeft -= 10;
    } else if (key === "ArrowUp") {
        marginTop -= 10;
    } else if (key === "ArrowDown") {
        marginTop += 10;

    }

    square.style.marginLeft = marginLeft + 'px';
    square.style.marginTop = marginTop + 'px';

}
// Добавляем обработчик событий к элементу window
window.addEventListener('keydown', handleKeyPress);