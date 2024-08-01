// פונקציה שמחזירה הבטחה שמחכה לזמן מסוים (במילישניות)
function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

// מחלקה שמייצגת חנות מוצרים
class Store {
    constructor(name) {
        this.name = name;
        this.products = [];
    }

    // הוספת מוצר לחנות
    addProduct(product) {
        this.products.push(product);
    }

    // הדפסת כל המוצרים בחנות
    listProducts() {
        console.log(`Products in ${this.name}:`);
        this.products.forEach(product => {
            console.log(`${product.name} - $${product.price}`);
        });
    }

    // מציאת מוצר לפי שם
    findProductByName(name) {
        return this.products.find(product => product.name === name);
    }
}

// מחלקה שמייצגת מוצר
class Product {
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }
}

// פונקציה שמדגימה שימוש במחלקות ובתכונות שונות
async function demoStore() {
    let store = new Store("Tech Store");

    // הוספת מוצרים לחנות
    store.addProduct(new Product("Laptop", 999.99));
    store.addProduct(new Product("Smartphone", 499.99));
    store.addProduct(new Product("Tablet", 299.99));

    // הדפסת המוצרים בחנות
    store.listProducts();

    // חיפוש מוצר לפי שם
    let product = store.findProductByName("Smartphone");
    console.log(`Found: ${product.name} - $${product.price}`);

    // המתנה של 2 שניות
    await sleep(2000);

    console.log("Thanks for visiting our store!");
}

// הפעלת פונקציית הדגמה
demoStore();
// פונקציה שמחזירה הבטחה שמחכה לזמן מסוים (במילישניות)
function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

// מחלקה שמייצגת חנות מוצרים
class Store {
    constructor(name) {
        this.name = name;
        this.products = [];
    }

    // הוספת מוצר לחנות
    addProduct(product) {
        this.products.push(product);
    }

    // הדפסת כל המוצרים בחנות
    listProducts() {
        console.log(`Products in ${this.name}:`);
        this.products.forEach(product => {
            console.log(`${product.name} - $${product.price}`);
        });
    }

    // מציאת מוצר לפי שם
    findProductByName(name) {
        return this.products.find(product => product.name === name);
    }
}

// מחלקה שמייצגת מוצר
class Product {
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }
}

// פונקציה שמדגימה שימוש במחלקות ובתכונות שונות
async function demoStore() {
    let store = new Store("Tech Store");

    // הוספת מוצרים לחנות
    store.addProduct(new Product("Laptop", 999.99));
    store.addProduct(new Product("Smartphone", 499.99));
    store.addProduct(new Product("Tablet", 299.99));

    // הדפסת המוצרים בחנות
    store.listProducts();

    // חיפוש מוצר לפי שם
    let product = store.findProductByName("Smartphone");
    console.log(`Found: ${product.name} - $${product.price}`);

    // המתנה של 2 שניות
    await sleep(2000);

    console.log("Thanks for visiting our store!");
}

// הפעלת פונקציית הדגמה
demoStore();
// פונקציה שמחזירה הבטחה שמחכה לזמן מסוים (במילישניות)
function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

// מחלקה שמייצגת חנות מוצרים
class Store {
    constructor(name) {
        this.name = name;
        this.products = [];
    }

    // הוספת מוצר לחנות
    addProduct(product) {
        this.products.push(product);
    }

    // הדפסת כל המוצרים בחנות
    listProducts() {
        console.log(`Products in ${this.name}:`);
        this.products.forEach(product => {
            console.log(`${product.name} - $${product.price}`);
        });
    }

    // מציאת מוצר לפי שם
    findProductByName(name) {
        return this.products.find(product => product.name === name);
    }
}

// מחלקה שמייצגת מוצר
class Product {
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }
}

// פונקציה שמדגימה שימוש במחלקות ובתכונות שונות
async function demoStore() {
    let store = new Store("Tech Store");

    // הוספת מוצרים לחנות
    store.addProduct(new Product("Laptop", 999.99));
    store.addProduct(new Product("Smartphone", 499.99));
    store.addProduct(new Product("Tablet", 299.99));

    // הדפסת המוצרים בחנות
    store.listProducts();

    // חיפוש מוצר לפי שם
    let product = store.findProductByName("Smartphone");
    console.log(`Found: ${product.name} - $${product.price}`);

    // המתנה של 2 שניות
    await sleep(2000);

    console.log("Thanks for visiting our store!");
}

// הפעלת פונקציית הדגמה
demoStore();
// פונקציה שמחזירה הבטחה שמחכה לזמן מסוים (במילישניות)
function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

// מחלקה שמייצגת חנות מוצרים
class Store {
    constructor(name) {
        this.name = name;
        this.products = [];
    }

    // הוספת מוצר לחנות
    addProduct(product) {
        this.products.push(product);
    }

    // הדפסת כל המוצרים בחנות
    listProducts() {
        console.log(`Products in ${this.name}:`);
        this.products.forEach(product => {
            console.log(`${product.name} - $${product.price}`);
        });
    }

    // מציאת מוצר לפי שם
    findProductByName(name) {
        return this.products.find(product => product.name === name);
    }
}

// מחלקה שמייצגת מוצר
class Product {
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }
}

// פונקציה שמדגימה שימוש במחלקות ובתכונות שונות
async function demoStore() {
    let store = new Store("Tech Store");

    // הוספת מוצרים לחנות
    store.addProduct(new Product("Laptop", 999.99));
    store.addProduct(new Product("Smartphone", 499.99));
    store.addProduct(new Product("Tablet", 299.99));

    // הדפסת המוצרים בחנות
    store.listProducts();

    // חיפוש מוצר לפי שם
    let product = store.findProductByName("Smartphone");
    console.log(`Found: ${product.name} - $${product.price}`);

    // המתנה של 2 שניות
    await sleep(2000);

    console.log("Thanks for visiting our store!");
}

// הפעלת פונקציית הדגמה
demoStore();
// פונקציה שמחזירה הבטחה שמחכה לזמן מסוים (במילישניות)
function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

// מחלקה שמייצגת חנות מוצרים
class Store {
    constructor(name) {
        this.name = name;
        this.products = [];
    }

    // הוספת מוצר לחנות
    addProduct(product) {
        this.products.push(product);
    }

    // הדפסת כל המוצרים בחנות
    listProducts() {
        console.log(`Products in ${this.name}:`);
        this.products.forEach(product => {
            console.log(`${product.name} - $${product.price}`);
        });
    }

    // מציאת מוצר לפי שם
    findProductByName(name) {
        return this.products.find(product => product.name === name);
    }
}

// מחלקה שמייצגת מוצר
class Product {
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }
}

// פונקציה שמדגימה שימוש במחלקות ובתכונות שונות
async function demoStore() {
    let store = new Store("Tech Store");

    // הוספת מוצרים לחנות
    store.addProduct(new Product("Laptop", 999.99));
    store.addProduct(new Product("Smartphone", 499.99));
    store.addProduct(new Product("Tablet", 299.99));

    // הדפסת המוצרים בחנות
    store.listProducts();

    // חיפוש מוצר לפי שם
    let product = store.findProductByName("Smartphone");
    console.log(`Found: ${product.name} - $${product.price}`);

    // המתנה של 2 שניות
    await sleep(2000);

    console.log("Thanks for visiting our store!");
}

// הפעלת פונקציית הדגמה
demoStore();
// פונקציה שמחזירה הבטחה שמחכה לזמן מסוים (במילישניות)
function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

// מחלקה שמייצגת חנות מוצרים
class Store {
    constructor(name) {
        this.name = name;
        this.products = [];
    }

    // הוספת מוצר לחנות
    addProduct(product) {
        this.products.push(product);
    }

    // הדפסת כל המוצרים בחנות
    listProducts() {
        console.log(`Products in ${this.name}:`);
        this.products.forEach(product => {
            console.log(`${product.name} - $${product.price}`);
        });
    }

    // מציאת מוצר לפי שם
    findProductByName(name) {
        return this.products.find(product => product.name === name);
    }
}

// מחלקה שמייצגת מוצר
class Product {
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }
}

// פונקציה שמדגימה שימוש במחלקות ובתכונות שונות
async function demoStore() {
    let store = new Store("Tech Store");

    // הוספת מוצרים לחנות
    store.addProduct(new Product("Laptop", 999.99));
    store.addProduct(new Product("Smartphone", 499.99));
    store.addProduct(new Product("Tablet", 299.99));

    // הדפסת המוצרים בחנות
    store.listProducts();

    // חיפוש מוצר לפי שם
    let product = store.findProductByName("Smartphone");
    console.log(`Found: ${product.name} - $${product.price}`);

    // המתנה של 2 שניות
    await sleep(2000);

    console.log("Thanks for visiting our store!");
}

// הפעלת פונקציית הדגמה
demoStore();
// פונקציה שמחזירה הבטחה שמחכה לזמן מסוים (במילישניות)
function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

// מחלקה שמייצגת חנות מוצרים
class Store {
    constructor(name) {
        this.name = name;
        this.products = [];
    }

    // הוספת מוצר לחנות
    addProduct(product) {
        this.products.push(product);
    }

    // הדפסת כל המוצרים בחנות
    listProducts() {
        console.log(`Products in ${this.name}:`);
        this.products.forEach(product => {
            console.log(`${product.name} - $${product.price}`);
        });
    }

    // מציאת מוצר לפי שם
    findProductByName(name) {
        return this.products.find(product => product.name === name);
    }
}

// מחלקה שמייצגת מוצר
class Product {
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }
}

// פונקציה שמדגימה שימוש במחלקות ובתכונות שונות
async function demoStore() {
    let store = new Store("Tech Store");

    // הוספת מוצרים לחנות
    store.addProduct(new Product("Laptop", 999.99));
    store.addProduct(new Product("Smartphone", 499.99));
    store.addProduct(new Product("Tablet", 299.99));

    // הדפסת המוצרים בחנות
    store.listProducts();

    // חיפוש מוצר לפי שם
    let product = store.findProductByName("Smartphone");
    console.log(`Found: ${product.name} - $${product.price}`);

    // המתנה של 2 שניות
    await sleep(2000);

    console.log("Thanks for visiting our store!");
}

// הפעלת פונקציית הדגמה
demoStore();
// פונקציה שמחזירה הבטחה שמחכה לזמן מסוים (במילישניות)
function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

// מחלקה שמייצגת חנות מוצרים
class Store {
    constructor(name) {
        this.name = name;
        this.products = [];
    }

    // הוספת מוצר לחנות
    addProduct(product) {
        this.products.push(product);
    }

    // הדפסת כל המוצרים בחנות
    listProducts() {
        console.log(`Products in ${this.name}:`);
        this.products.forEach(product => {
            console.log(`${product.name} - $${product.price}`);
        });
    }

    // מציאת מוצר לפי שם
    findProductByName(name) {
        return this.products.find(product => product.name === name);
    }
}

// מחלקה שמייצגת מוצר
class Product {
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }
}

// פונקציה שמדגימה שימוש במחלקות ובתכונות שונות
async function demoStore() {
    let store = new Store("Tech Store");

    // הוספת מוצרים לחנות
    store.addProduct(new Product("Laptop", 999.99));
    store.addProduct(new Product("Smartphone", 499.99));
    store.addProduct(new Product("Tablet", 299.99));

    // הדפסת המוצרים בחנות
    store.listProducts();

    // חיפוש מוצר לפי שם
    let product = store.findProductByName("Smartphone");
    console.log(`Found: ${product.name} - $${product.price}`);

    // המתנה של 2 שניות
    await sleep(2000);

    console.log("Thanks for visiting our store!");
}

// הפעלת פונקציית הדגמה
demoStore();

