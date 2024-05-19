document.getElementById('createButton').addEventListener('click', function() {

    var square = document.createElement('div');
    square.style.width = '40px';
    square.style.height = '40px';
    square.style.marginTop = '10px'
    square.style.background = '#ff0000';

    // Добавление нового абзаца в контейнер
    document.getElementById('container').appendChild(square);
});