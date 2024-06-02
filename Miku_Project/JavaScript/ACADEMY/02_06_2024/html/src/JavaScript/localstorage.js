function gg(event) {
    event.preventDefault(); // Предотвращаем стандартное действие кнопки

    const login = document.getElementById('login').value;
    const password = document.getElementById('pass').value; 

    // Сохраняем данные пользователя в Local Storage
    localStorage.setItem('username', login);
    localStorage.setItem('password', password); 

    alert('User registered successfully!');
    document.getElementById('loginForm').reset(); 
}
