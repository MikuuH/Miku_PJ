/**
 * let num = 1; // пусть здесь число 1

switch (num) {
	case 1:
		console.log(1); // сработает это
	case 2:
		console.log(2); // сработает и это
	case 3:
		console.log(3); // сработает и это
}
Изменим значение переменной:

let num = 2; // пусть здесь число 2

switch (num) {
	case 1:
		console.log(1);
	case 2:
		console.log(2); // сработает это
	case 3:
		console.log(3); // сработает и это
}
Изменим значение переменной:

let num = 3; // пусть здесь число 3

switch (num) {
	case 1:
		console.log(1);
	case 2:
		console.log(2);
	case 3:
		console.log(3); // сработает это
}
Иногда такую особенность используют, при решении задач. Смотрите пример:

let num = 1;
let res;

switch (num) {
	case 1:
	case 2:
		res = 'a';
	break;
	case 3:
		res = 'b';
	break;
}

console.log(res);
Очевиднее, однако, решить такую задачу через if:

let num = 1;
let res;

if (num == 1 || num == 2) {
	res = 'a';
}

if (num == 3) {
	res = 'b';
}

console.log(res);
 */

/////////////////////////////////////////////////////////////

