// циклы

// 1
// function printAllElementMassiv(list) {
//     for (let elem of list) {
//         console.log(elem);
//     }
// }

// let arr = ['a', 'b', 'c', 'd', 'e'];
// printAllElementMassiv(list=arr)

// 2
// function printElementObject(obj) {

//     for (let key in obj) {
//         console.log(obj[key]); // выведет элемент ключа
//         console.log(key);  // выведет ключ
//     }
//     return 0;
// }

// let obj = {x: 1, y: 2, z: 3};
// printElementObject(obj=obj)

// 3
// генерация от 1 до 100
// let i = 1
// while (i <= 100) {
//     console.log(i);
//     i++;
// }


// 4
// от 11 до 33
// let i = 11
// while (i <= 33) {
//     console.log(i);
//     i++;
// }

// 5
// умножаем до тех пор, пока i не станет 1000. + подсчет кол ва проходов
// let i = 10;
// let cout = 0
// while (i <= 1000) {
//      i = i * 3
//      cout += 1
// }
// console.log(i);
// console.log(cout);

// 6
//от 1 до 100
// for (let i = 0; i <= 100; i++) {
//     console.log(i);
// }

// 7
// от 11 до 33
// for (let i = 11; i <= 33; i++) {
//     console.log(i);
// }

// 8
// четные от 0 до 100
// for (let i = 0; i <= 100; i += 2) {
//     console.log(i);
// }

// 9
// нечетные от 1 до 99
// for (let i = 1; i <= 99; i += 2) {
//     console.log(i);
// }

// 10
// от 100 до 0
// for (let i = 100; i >= 0; i--) {
//     console.log(i);
// }

// 11
// вывести все элементы массива
// function printArr(arr) {
//     for (let mass = 0; mass <= arr.length; mass++) {
//         if (arr[mass] != undefined) { // если не равно undefined
//             console.log(arr[mass]);
//         }
//     }
// }

// let arr = ['a', 4, 'c', 'd', 'e'];
// printArr(arr)

// 12
// кроме первого и последнего
// function printArr(arr) {
//     for (let mass = 1; mass < arr.length - 1; mass ++) {
//         console.log(arr[mass]);
//     }
// }

// let arr = ['a', 'b', 'c', 'd', 'e'];
// printArr(arr)

// 13
// function printArr(arr) {
//     for (let mass = arr.length - 1; mass >= 0; mass--) {
//         console.log(arr[mass]);
//     }
// }


// let arr = ['a', 'b', 'c', 'd', 'e'];
// printArr(arr)

//14
//Исправьте ошибку, допущенную в следующем коде:
// let arr = ['a', 'b', 'c', 'd', 'e'];
// for (let i = 0; i <= arr.length - 1; i++) {
// 	console.log(arr[i]);
// }
// ошибкой можно назвать то, что там undefined, который решился arr.length - 1

// 15
// Выведите в консоль те элементы массива, которые больше 3-х, но меньше 10.
// let arr = [2, 5, 9, 15, 1, 4];
// for (let elem of arr) {
//     if (elem > 3 && elem < 10) {
//         console.log(elem``);
//     }
// }

// 16
// Выведите в консоль те элементы объекта, значения которых - нечетные числа.
// let obj = {a: 1, b: 2, c: 3, d: 4, e: 5};
// for (let i in obj) {
//     if (obj[i] % 2 === 1) {
//         console.log(obj[i]);
//     }
// }

// 17
// Найдите сумму четных чисел от 2 до 100.
// let res = 0;
// for (let i = 2; i <= 100; i++) {
//     if (i % 2 === 0) {
//         res += i
//     }
//     console.log(res);
// }
 пр
// 18
// Найдите сумму нечетных чисел от 1 до 99.
// let res = 0;
// for (let i = 1; i <= 99; i+=2) {
//     res += i;
//     console.log(res);
// }

// 19
// Найдите произведение целых чисел от 1 до 20.
// let res = 1;
// for (let i = 1; i <= 20; i++) {
//     res *= i
// }
// console.log(res);