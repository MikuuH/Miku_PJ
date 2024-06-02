

var mass = [
    {
        product: ["молоко", "печенье", 'сладости', 'чтоэто'],
        cout: [1, 30, 25, 2],
        price: [44, 77, 55, 59]
    }
];


function infoTtoreReceipt(info) {
    let a = 'Продукт: \n', h = 'Количество: \n'
    for (let i = 0; i < info[0].product.length; i++ ) {
        a += `${info[0].product[i]} | ${info[0].price[i]} грн\n`
    }

    h += info[0].cout.join(' | ')

    return(a + "\n" + h);
}


function FindMaxPriceProduct(mass) {
    let price = mass[0].price,
        MaxPrice = Math.max(...price),
        indx = price.indexOf(MaxPrice),
        result = mass[0].product[indx]

    return [result, MaxPrice]
}

function resultTtoreReceipt(info) {


}




