/* 
Создайте массив CSS-стилей (цвет, размер шрифта, выравнивание, подчеркивание и т.д.).
Каждый элемент массива – это объект, который
состоит из двух свойств: название и значение стиля.
Напишите функцию, принимающую массив стилей и текст, и выводит этот текст с помощью document.write()
в тегах <p></p>,
добавив в открытый тэг атрибут style со всеми стилями, перечисленными в массиве.
*/

var css = [
    {color: 'aqua'},
];

var text = "hello! im Miku!";

function addCssStyles(text, css) {
    let styles = "";

    for(let i in css) {
        for(let key in css[i]) {
            styles += `${key}: ${css[i][key]}; `
        }
    }

    document.write(`<p style="${styles}">${text}</p>`);
};

addCssStyles(text, css);



