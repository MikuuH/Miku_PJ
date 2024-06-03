// addfields.js
function ff(event) {
    event.preventDefault();
    const username = document.getElementById('login').value;
    alert(username)
    const password = document.getElementById('pass').value;
    const userInfo = document.createElement('div');
    userInfo.innerHTML = `<strong>Username:</strong> ${username}<br><strong>Password:</strong> ${password}`;
    document.getElementById('userInfo').appendChild(userInfo);
    document.createElement('/div');
    document.getElementById('loginForm').reset();
}
