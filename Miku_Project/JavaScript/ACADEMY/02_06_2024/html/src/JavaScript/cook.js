function handleLogin(event) {
  event.preventDefault(); // Предотвращение стандартной обработки формы
  const username = document.getElementById('firstName').value;
  const login = document.getElementById('login').value;


  // Сохраняем имя пользователя в cookies на 7 дней
  setCookie({'username': username});
  setCookie({'login': login});


  alert('Welcome, ' + username + '! Your username has been saved.');
  // Очищаем форму
  //document.getElementById('loginForm').reset();
}

function setCookie(obj) {
  const d = new Date();
  d.setTime(d.getTime() + (days*24*60*60*1000));
  let expires = "expires="+ d.toUTCString();
  document.cookie = name + "=" + value + ";" + expires + ";path=/";
}


// function setCookie(name, value, days) {
//   const d = new Date();
//   d.setTime(d.getTime() + (days*24*60*60*1000));
//   let expires = "expires="+ d.toUTCString();
//   document.cookie = name + "=" + value + ";" + expires + ";path=/";
// }

function getCookie(name) {
  const nameEQ = name + "=";
  const ca = document.cookie.split(';');
  for(let i = 0; i < ca.length; i++) {
      let c = ca[i];
      while (c.charAt(0) === ' ') c = c.substring(1);
      if (c.indexOf(nameEQ) === 0) return c.substring(nameEQ.length, c.length);
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
