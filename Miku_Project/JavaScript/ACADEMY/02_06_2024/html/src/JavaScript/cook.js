// cook.js
function handleLogin(event) {
  event.preventDefault();
  const username = document.getElementById('firstName').value;
  setCookie('username', username, 7);
  alert('Welcome, ' + username + '! Your username has been saved.');
  document.getElementById('loginForm').reset();
}

function setCookie(name, value, days) {
  const d = new Date();
  d.setTime(d.getTime() + (days * 24 * 60 * 60 * 1000));
  const expires = "expires=" + d.toUTCString();
  document.cookie = name + "=" + value + ";" + expires + ";path=/";
}

function getCookie(name) {
  const nameEQ = name + "=";
  const ca = document.cookie.split(';');
  for (let i = 0; i < ca.length; i++) {
      let c = ca[i].trim();
      if (c.indexOf(nameEQ) == 0) return c.substring(nameEQ.length);
  }
  return null;
}

window.onload = function() {
  const user = getCookie('username');
  if (user) {
      alert('Welcome back, ' + user + '!');
  } else {
      alert('Please log in.');
  }
}
