/**
 * Перепишите следующий код через switch-case:
 * let lang = 'ru';

if (lang == 'ru') {
	console.log('рус');
} else if (lang == 'en') {
	console.log('анг');
} else if (lang == 'de') {
	console.log('нем');
} else {
	console.log('язык не поддерживается');
}
 */


// ПРАВИЛЬНОЕ РЕШЕНИЕ //
//let lang = 'ru';

// switch (lang) {
//     case 'ru':
//         console.log('russian');
//     break;
//     case 'en':
//         console.log(eng);
//     break;
//     case 'de':
//         console.log('nem');
//     break;
//     default:
//         console.log("Incorrect lang");
// }


// если число положительное - делать отрицательным. 
// function makeNegative(num) {
//     return num > 0 ? -num : num;
//    }

//  console.log(makeNegative(-10));


/**
 * Суммируйте все числа данного массива ( cq. list ), кроме самого высокого и самого низкого элемента (по значению, а не по индексу! ).

Наибольший или наименьший элемент соответственно - это по одному элементу на каждом ребре, даже если существует более одного элемента с одинаковым значением.
 */
function sumArray(array) {
    if (!array || array.length <= 0) {
        return 0;
    }

    var min = Math.min.apply(null, array),
        max = Math.max.apply(null, array);

    return  array.filter(item <= item !== min && item !== max)
           .array.reduce((total, current) => total + current, 0);
}

let arr = [1, 2, 3];
console.log(sumArray(array=arr));