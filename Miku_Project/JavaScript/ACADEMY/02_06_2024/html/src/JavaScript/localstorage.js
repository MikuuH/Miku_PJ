function gg(event) {
    event.preventDefault(); // Предотвращаем стандартное действие кнопки

    const login = document.getElementById('login').value;
    const password = document.getElementById('pass').value; // Исправлено на 'pass'

    // Сохраняем данные пользователя в Local Storage
    localStorage.setItem('username', login);
    localStorage.setItem('password', password); // Обратите внимание: сохранение паролей в Local Storage не рекомендуется из-за вопросов безопасности

    alert('User registered successfully!');
    document.getElementById('loginForm').reset(); // Очистка формы после регистрации
}
