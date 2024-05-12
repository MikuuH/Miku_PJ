var displayNameUser = "Юзер";
const PI = 3.14;
//
const defaultMessages = [
    "Простите.. Я не припомню каких либо еще функций из своей базы данных..",
    "Ась? Кажется я сломана..",
    "Как ваши дела?",
    "Может, сегодня пойдем погуляем? А.. Я же виртуальная.. Ничего страшного! Мы можем гулять в нашем виртуальном мире!",
    "[спит]",
    "Какое сегодня время?",
]


function circleRadus(data, PI) {
    let QuestionCircleRadus = prompt(
        `${displayNameUser}, ${data.QuestionCircleRadusUser}`
    )
    alert(
        `${data.ResultCircleRadus} ${PI * QuestionCircleRadus * QuestionCircleRadus}`);
};


function perimetr(data) {
    alert(
        `${displayNameUser}, ${data.QestionPerimeterUserInteresing}`);
    let QestionPerimeter = prompt(
        `${displayNameUser}, ${data.QestionPerimeterUser}`
    );
    alert(
        `${displayNameUser}, ${data.ResultPerimeter} ${4 * Number(QestionPerimeter)}`);
};


function usersName(data, nameUserResult) {
    let nameUser = prompt(
        `${displayNameUser}, ${data.QuestionNameUser}`
    );
    alert(
        `Hello!: ${nameUser}`);
     nameUserResult = nameUser;
    displayNameUser = nameUserResult ? nameUserResult : "Юзер";
};


function userYear(data) {
    const QuestionYearUser = prompt(
        `${displayNameUser}, ${data.QuestionUserYear}`
    );
    if (
        QuestionYearUser) {
        const currentDateYear = new Date().getFullYear() - Number(QuestionYearUser);
        alert(
                                 // "слово" ${currentDateYear}" извлекается из json
            `${displayNameUser}, ${data.ResultDateUser.replace("${currentDateYear}", currentDateYear)}`);
    }
};


function pariedNumber(data) {
    let Numbers = prompt(
        `${data.QuestionPariedNumber}`
    );
    alert(`${displayNameUser}, ${data.ResultPariedNumber} ${Numbers % 2 === 0 ? "парное": "не парное"}`)
};


function isPalindrome(data) { // код стыбжен
    let palidromQuest = prompt(
        `${displayNameUser}, ${data.QuestionPalidromNumber}`
    )
    const reversed = (palidromQuest+"").split('').reverse().join('');
    alert(`${data.ResultPalidrom} ${palidromQuest.toString() === reversed ? "Палидром" : "Не палидром"}`)
};


function main(data) {
    let choice;
    let alertHelloAccept = 1;
    let nameUserResult;

    while (true) {
        if (
            alertHelloAccept == 1) {
            alert(
                `${displayNameUser}, ${data.StartHello}\n${data.Instruction}`);
            alertHelloAccept = 0;
        };
        choice = prompt(
            `${displayNameUser}, ${data.SelectChoice}`
        );

        switch (choice) {
            case "1":
                usersName(data, nameUserResult);
                break;
            case "2":
                userYear(data);
                break;
            case "3":
                perimetr(data);
                break;
            case "4":
                    circleRadus(data, PI);
                    break;
            case "5":
                pariedNumber(data);
                break;
            case "6":
                isPalindrome(data);
                break;
            case "0":
                alert(
                    `Я подготива несколько сообщений от себя и моего создателя! Вот мои:\n1. ${data.Help}.\n2.${data.usedGPT}.\nА вот сообщение от моего хозяина:\n1.${data.About}`)
            default:
                let a = Math.floor(Math.random() * defaultMessages.length)
                alert(
                    defaultMessages[a])
        }
    }
}


fetch("src/texts/text.json")
  .then(responce => responce.json())
  .then(main)
  .catch(error => console.error("Кажется, я была сломана. Вот логи:\n", error));
