// создать страничку, в ней квадрат со стороной 100px при нажатии на квадрат вывести алерт с типом события

document.addEventListener('DOMContentLoaded', function() {
    const inputField = document.getElementById('square');

    function updateEventDisplay(event) {
        alert(event.type)
    };

    // События мыши
    inputField.addEventListener('click', updateEventDisplay);
});



