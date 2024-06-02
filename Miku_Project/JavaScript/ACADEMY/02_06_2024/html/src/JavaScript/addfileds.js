function ff(event) {
    event.preventDefault(); // Предотвращаем стандартное поведение формы

    const username = document.getElementById('login').value;
    alert(username)
    const password = document.getElementById('pass').value;

    var userInfo = document.createElement('div');
    userInfo.innerHTML = '<p>Username:</p> ' + username + '<br>' +
                         '<p>Password:</p> ' + password;

    document.getElementById('userInfo').appendChild(userInfo);
};
