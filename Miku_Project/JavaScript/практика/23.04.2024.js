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
let lang = 'ru';

switch (lang) {
    case 'ru':
        console.log('russian');
    break;
    case 'en':
        console.log(eng);
    break;
    case 'de':
        console.log('nem');
    break;
    default:
        console.log("Incorrect lang");
}
