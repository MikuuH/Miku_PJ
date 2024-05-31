var or = 0;
var widthDefault = null;
var heightDefault = null;

var kvadrat = document.getElementById('Kvadrat');
var text = document.getElementById('Kvadrat-text');
var button = document.getElementById('Kvadrat-button');

function getKvadratParametres(element) {
    return [window.getComputedStyle(element).height, window.getComputedStyle(element).width];
};

function saveKvadratParametres(event) {
    heightDefault = parseFloat(getKvadratParametres(event.target)[0]);
    widthDefault = parseFloat(getKvadratParametres(event.target)[1]);
}

function updateEventDisplay(event) {
    if (or == 0) {
        saveKvadratParametres(event);
    }

    if (or < 2) {
        // берем без 'px' дабы позже умножить || //  берем первый элемент * 2 + 'px'
        kvadrat.style.height = parseFloat(getKvadratParametres(event.target)[0]) * 2 + 'px';
        kvadrat.style.width = parseFloat(getKvadratParametres(event.target)[1]) * 2 + 'px';

        or += 1;
    } else {
        text.style.display = 'block';
        kvadrat.style.backgroundColor = 'red';
    }
};

function resetKvadrat() {
    or = 0;
    kvadrat.style.height = widthDefault + 'px';
    kvadrat.style.width = heightDefault + 'px';
    text.style.display = 'none';
    kvadrat.style.backgroundColor = '';
}

kvadrat.addEventListener('click', updateEventDisplay);
button.addEventListener('click', resetKvadrat);
