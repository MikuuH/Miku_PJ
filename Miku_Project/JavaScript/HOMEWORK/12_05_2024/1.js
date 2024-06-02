let listPurchases = [
    {
        name: 'молоко',
        cout: 20,
        purchased: false
    },

    {
        name: 'вкусняшка',
        cout: 20,
        purchased: false
    },
];

function returnLowerCase(key) {
    try {
        return key.toLowerCase();
    } catch {
        console.error("Мне не удалось преобразовать твой текст в нижний регистр. Прости-и-и..");
        return null
    }
};


function infoPurchases(lst) {
    let result = lst.filter(item => item.purchased);

            // длина объекта > 0:
    if(lst && result.length > 0) {
        console.log(result);
    } else {
        console.log("ну блин! Зачем мне пустой список?!")
    }

    console.log(user);

};


function addPurchases(product) {
    if (product.name && product.cout !== undefined && product.purchased !== undefined) {
        let findYes = listPurchases.find(
            item => item.name === product.name
        );

        if (findYes) {
            findYes.cout += product.cout;
        } else {
            listPurchases.push({
                name: product.name,
                cout: product.cout,
                purchased: product.purchased
            });
            console.log("И-и-и ТА-а-А-К! Я смогла добавить ваш новый продукт в список!");
        }
    } else {
        console.log(
            "Упс! Похоже один  из элементов отсутствует..Я не глупая если что! Это тебе нужно перепроверить то,что ты добавляешь!! ");
    };
};



function purchasedProduct(nameProdut) {
    let lowerNameProduct = returnLowerCase(nameProdut);

    let findNameProduct = listPurchases.find(
        item => item.name == lowerNameProduct
    );

    if (findNameProduct) {
        findNameProduct.purchased = true;
    } else {
        console.log(`А-а!Х Я не смогла найти продукт ${lowerNameProduct}`);
    };
    // console.log(listPurchases);

}

console.log(returnLowerCase(11))

// purchasedProduct("Молоко");

// addPurchases(
//         {
//             name: 'МVолоко',
//             cout: 20,
//             purchased: false
//         }
// )


//infoPurchases(listPurchases);
