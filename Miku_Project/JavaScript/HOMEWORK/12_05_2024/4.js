// list = ["б", "а", "г"];
// list.sort()
// console.log(list); // => ['a', 'b', 'c']






/**
 * Создайте массив аудиторий академии. Объект-аудитория состоит из названия, количества мест (от 10 до 20) и названия факультета,
для которого она предназначена.
Напишите несколько функций для работы с ним.
1. Вывод на экран всех аудиторий.
2. Вывод на экран аудиторий для указанного факультета.

3. Вывод на экран только тех аудиторий, которые подходят
для передаваемой группы. Объект-группа состоит из названия,
количества студентов и названия факультета.
4. Функция сортировки аудиторий по количеству мест.

5. Функция сортировки аудиторий под названием (по алфавиту)
 */

var academy = [
    { name: "Room 101", places: 15, faculty: "Computer Science" },
    { name: "Room 102", places: 18, faculty: "Mathematics" },
    { name: "Room 103", places: 20, faculty: "Physics" },
    { name: "Room 104", places: 12, faculty: "Chemistry" },
    { name: "Room 105", places: 16, faculty: "Biology" },
    { name: "Room 106", places: 14, faculty: "Engineering" },
    { name: "Room 107", places: 19, faculty: "History" },
    { name: "Room 110", places: 19, faculty: "History" },
    { name: "Room 108", places: 13, faculty: "Literature" },
    { name: "Room 101", places: 15, faculty: "Computer Science" },
    { name: "Room 102", places: 18, faculty: "Mathematics" },
    { name: "Room 103", places: 20, faculty: "Physics" },
    { name: "Room 104", places: 12, faculty: "Chemistry" },
    { name: "Room 105", places: 16, faculty: "Biology" },
    { name: "Room 106", places: 14, faculty: "Engineering" },
    { name: "Room 107", places: 19, faculty: "History" },
    { name: "Room 110", places: 19, faculty: "History" },
    { name: "Room 108", places: 13, faculty: "Literature" },
    { name: "Room 101", places: 15, faculty: "Computer Science" },
    { name: "Room 102", places: 18, faculty: "Mathematics" },
    { name: "Room 103", places: 20, faculty: "Physics" },
    { name: "Room 104", places: 12, faculty: "Chemistry" },
    { name: "Room 105", places: 16, faculty: "Biology" },

];

function resultNameAademy(academy) {
    for (let i = 0; i < academy[0].name.length; i++) {
        console.log(academy[i].name);
    }
};


function searchFacultetAcademy(academy, text) {
    return academy.filter(item => item.faculty.includes(text))

};


function searchRoomForObject(academy, object) {
    return academy.find(item =>
        item.name === object.name &&
        item.places === object.places &&
        item.faculty === object.faculty
    ) || "Ай! Мне не удалось найти руму по объекту.. Может, я плохо ищу?.."
};


function sortAcademy(academy, sorts) {
    let newAcademy = [...academy];

    switch (sorts) {
        case "up":
            return newAcademy.sort((a,b) => a.places - b.places);
            break;
        case "down":
            return newAcademy.sort((a,b) => b.places - a.places);
        default:
            console.error("Но я больше не знаю параметров.. Хозяин! Ну ты и дурак! Когда завезешь новые параметры?")
            break;
    }
};


function sortAcademyForAlphavit(academy) {
    return academy.sort();
};

//console.log(sortAcademyForAlphavit(academy));

//console.log(sortAcademy(academy, "up"));

// console.log(searchFacultetAcademy(academy, 'History'));

/* console.log(searchRoomForObject(
    academy,
    { name: "Room 110", places: 191, faculty: "History" }
));
*/
