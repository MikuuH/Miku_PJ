var submitEmail = document.getElementById('submitEmail');

function updateEmailDisplay(event) {
    let evem = event.target;

    var email = document.getElementById('email').value;
    var emailResore = document.getElementById('email-restore').value;


    if (email == emailResore && email.length > 5 && emailResore.length > 5) {
        alert("Почта указана верно")
    } else {
        alert('Почта указана не верно!')
    }

};