// Fetch API
document.getElementById('fetch').addEventListener('click', function() {
    fetch("https://reqres.in/api/{resource}/10")
        .then(response => response.json())
        .then(data => console.log("Fetch API Response:", data))
        .catch(error => console.error('Fetch Error:', error));
});


document.getElementById('xhr').addEventListener('click', function() {
    var xhr = new XMLHttpRequest();
    // xhr.open("GET", "https://reqres.in/api/users/2");
    xhr.open('GET', 'https://reqres.in/api/users?page=12&per_page=33', false); // Третий параметр false указывает на синхронность запроса

    xhr.onreadystatechange = function() {
        if(xhr.readyState === 4) {
            console.log("XMLHttpRequest Response:", xhr.responseText);
        }
    };
    xhr.send();
});