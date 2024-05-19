document.getElementById('createButton').addEventListener('click', function() {
    let randomRGB = [
        '#66cdaa',
        '#667b68',
        '#ccff00'
    ]

    var square = document.createElement('div');

    square.style.width = '40px';
    square.style.height = '40px';
    square.style.marginTop = '10px'
    square.style.background = randomRGB[Math.floor(Math.random() * randomRGB.length)];

    // Добавление нового абзаца в контейнер
    document.getElementById('container').appendChild(square);

    var addId = document.createElement('p');

    // уникальный айди
    addId.textContent = square.id = "Id: " + Date.now() + String(Math.floor(Math.random() * 100));

    container.appendChild(square);
    container.appendChild(addId);

});