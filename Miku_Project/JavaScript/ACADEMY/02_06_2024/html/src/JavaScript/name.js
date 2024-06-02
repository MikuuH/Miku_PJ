let submit = document.getElementById('submit');

function updateEventDisplay(event) {
    let evem = event.target;

    var getname = document.getElementById('firstName').value;

    if (getname.length < 5) {
        alert("Имя меньше или равно 5 символам");
    };

};