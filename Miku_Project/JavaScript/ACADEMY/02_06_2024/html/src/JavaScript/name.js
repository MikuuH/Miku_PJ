let submit = document.getElementById('submit');

//var email = document.getElementById('email').value;

function updateEventDisplay(event) {
    let evem = event.target;

    var getname = document.getElementById('firstName').value;
    alert(getname)
    
    if (getname.length < 5) {
        alert("Имя меньше или равно 5 символам");
    };

};


//submit.addEventListener('click', updateEventDisplay);
