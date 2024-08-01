import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.function.Consumer;
import java.util.stream.Collectors;

// Interface for displaying information
interface Displayable {
    void display();
}
import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.function.Consumer;
import java.util.stream.Collectors;

// Interface for displaying information
interface Displayable {
    void display();
}

// Abstract class representing a general Product
abstract class Product implements Displayable {
    protected String name;
    protected double price;

    public Product(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public abstract double getDiscountedPrice();

    @Override
    public void display() {
        System.out.println("Product: " + name + ", Price: $" + price);
    }
}

// Class representing an electronic product
class ElectronicProduct extends Product {
    private int warrantyMonths;

    public ElectronicProduct(String name, double price, int warrantyMonths) {
        super(name, price);
        this.warrantyMonths = warrantyMonths;
    }

    @Override
    public double getDiscountedPrice() {
        return price * 0.9; // 10% discount
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Warranty: " + warrantyMonths + " months");
    }
}

// Class representing a food product
class FoodProduct extends Product {
    private int calories;

    public FoodProduct(String name, double price, int calories) {
        super(name, price);
        this.calories = calories;
    }

    @Override
    public double getDiscountedPrice() {
        return price * 0.95; // 5% discount
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Calories: " + calories);
    }
}

// Generic class for a container
class Container<T extends Product> {
    private List<T> items = new ArrayList<>();

    public void add(T item) {
        items.add(item);
    }

    public void remove(T item) {
        items.remove(item);
    }

    public void displayAll() {
        items.forEach(Displayable::display);
    }
}

// Utility class for random operations
class RandomUtils {
    private static final Random random = new Random();

    public static int getRandomInt(int bound) {
        return random.nextInt(bound);
    }

    public static double getRandomDouble(double bound) {
        return random.nextDouble() * bound;
    }
}

// Main class demonstrating the use of the above classes
public class Main {
    public static void main(String[] args) {
        // Create some products
        ElectronicProduct laptop = new ElectronicProduct("Laptop", 1500, 24);
        FoodProduct apple = new FoodProduct("Apple", 0.5, 95);

        // Display product information
        laptop.display();
        apple.display();

        // Use a generic container
        Container<Product> productContainer = new Container<>();
        productContainer.add(laptop);
        productContainer.add(apple);

        System.out.println("\nAll products in container:");
        productContainer.displayAll();

        // Demonstrate the use of a lambda expression and streams
        System.out.println("\nDiscounted prices:");
        List<Product> products = List.of(laptop, apple);
        products.stream()
                .map(Product::getDiscountedPrice)
                .forEach(price -> System.out.printf("$%.2f\n", price));

        // Demonstrate utility class usage
        System.out.println("\nRandom numbers:");
        for (int i = 0; i < 5; i++) {
            System.out.println("Random int: " + RandomUtils.getRandomInt(100));
            System.out.println("Random double: " + RandomUtils.getRandomDouble(50));
        }

        // Demonstrate the use of a consumer functional interface
        Consumer<Product> productConsumer = p -> System.out.println("Consuming product: " + p.getName());
        productConsumer.accept(laptop);
        productConsumer.accept(apple);
    }
}
import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.function.Consumer;
import java.util.stream.Collectors;

// Interface for displaying information
interface Displayable {
    void display();
}

// Abstract class representing a general Product
abstract class Product implements Displayable {
    protected String name;
    protected double price;

    public Product(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public abstract double getDiscountedPrice();

    @Override
    public void display() {
        System.out.println("Product: " + name + ", Price: $" + price);
    }
}

// Class representing an electronic product
class ElectronicProduct extends Product {
    private int warrantyMonths;

    public ElectronicProduct(String name, double price, int warrantyMonths) {
        super(name, price);
        this.warrantyMonths = warrantyMonths;
    }

    @Override
    public double getDiscountedPrice() {
        return price * 0.9; // 10% discount
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Warranty: " + warrantyMonths + " months");
    }
}

// Class representing a food product
class FoodProduct extends Product {
    private int calories;

    public FoodProduct(String name, double price, int calories) {
        super(name, price);
        this.calories = calories;
    }

    @Override
    public double getDiscountedPrice() {
        return price * 0.95; // 5% discount
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Calories: " + calories);
    }
}

// Generic class for a container
class Container<T extends Product> {
    private List<T> items = new ArrayList<>();

    public void add(T item) {
        items.add(item);
    }

    public void remove(T item) {
        items.remove(item);
    }

    public void displayAll() {
        items.forEach(Displayable::display);
    }
}

// Utility class for random operations
class RandomUtils {
    private static final Random random = new Random();

    public static int getRandomInt(int bound) {
        return random.nextInt(bound);
    }

    public static double getRandomDouble(double bound) {
        return random.nextDouble() * bound;
    }
}

// Main class demonstrating the use of the above classes
public class Main {
    public static void main(String[] args) {
        // Create some products
        ElectronicProduct laptop = new ElectronicProduct("Laptop", 1500, 24);
        FoodProduct apple = new FoodProduct("Apple", 0.5, 95);

        // Display product information
        laptop.display();
        apple.display();

        // Use a generic container
        Container<Product> productContainer = new Container<>();
        productContainer.add(laptop);
        productContainer.add(apple);

        System.out.println("\nAll products in container:");
        productContainer.displayAll();

        // Demonstrate the use of a lambda expression and streams
        System.out.println("\nDiscounted prices:");
        List<Product> products = List.of(laptop, apple);
        products.stream()
                .map(Product::getDiscountedPrice)
                .forEach(price -> System.out.printf("$%.2f\n", price));

        // Demonstrate utility class usage
        System.out.println("\nRandom numbers:");
        for (int i = 0; i < 5; i++) {
            System.out.println("Random int: " + RandomUtils.getRandomInt(100));
            System.out.println("Random double: " + RandomUtils.getRandomDouble(50));
        }

        // Demonstrate the use of a consumer functional interface
        Consumer<Product> productConsumer = p -> System.out.println("Consuming product: " + p.getName());
        productConsumer.accept(laptop);
        productConsumer.accept(apple);
    }
}
import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.function.Consumer;
import java.util.stream.Collectors;

// Interface for displaying information
interface Displayable {
    void display();
}

// Abstract class representing a general Product
abstract class Product implements Displayable {
    protected String name;
    protected double price;

    public Product(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public abstract double getDiscountedPrice();

    @Override
    public void display() {
        System.out.println("Product: " + name + ", Price: $" + price);
    }
}

// Class representing an electronic product
class ElectronicProduct extends Product {
    private int warrantyMonths;

    public ElectronicProduct(String name, double price, int warrantyMonths) {
        super(name, price);
        this.warrantyMonths = warrantyMonths;
    }

    @Override
    public double getDiscountedPrice() {
        return price * 0.9; // 10% discount
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Warranty: " + warrantyMonths + " months");
    }
}

// Class representing a food product
class FoodProduct extends Product {
    private int calories;

    public FoodProduct(String name, double price, int calories) {
        super(name, price);
        this.calories = calories;
    }

    @Override
    public double getDiscountedPrice() {
        return price * 0.95; // 5% discount
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Calories: " + calories);
    }
}

// Generic class for a container
class Container<T extends Product> {
    private List<T> items = new ArrayList<>();

    public void add(T item) {
        items.add(item);
    }

    public void remove(T item) {
        items.remove(item);
    }

    public void displayAll() {
        items.forEach(Displayable::display);
    }
}

// Utility class for random operations
class RandomUtils {
    private static final Random random = new Random();

    public static int getRandomInt(int bound) {
        return random.nextInt(bound);
    }

    public static double getRandomDouble(double bound) {
        return random.nextDouble() * bound;
    }
}

// Main class demonstrating the use of the above classes
public class Main {
    public static void main(String[] args) {
        // Create some products
        ElectronicProduct laptop = new ElectronicProduct("Laptop", 1500, 24);
        FoodProduct apple = new FoodProduct("Apple", 0.5, 95);

        // Display product information
        laptop.display();
        apple.display();

        // Use a generic container
        Container<Product> productContainer = new Container<>();
        productContainer.add(laptop);
        productContainer.add(apple);

        System.out.println("\nAll products in container:");
        productContainer.displayAll();

        // Demonstrate the use of a lambda expression and streams
        System.out.println("\nDiscounted prices:");
        List<Product> products = List.of(laptop, apple);
        products.stream()
                .map(Product::getDiscountedPrice)
                .forEach(price -> System.out.printf("$%.2f\n", price));

        // Demonstrate utility class usage
        System.out.println("\nRandom numbers:");
        for (int i = 0; i < 5; i++) {
            System.out.println("Random int: " + RandomUtils.getRandomInt(100));
            System.out.println("Random double: " + RandomUtils.getRandomDouble(50));
        }

        // Demonstrate the use of a consumer functional interface
        Consumer<Product> productConsumer = p -> System.out.println("Consuming product: " + p.getName());
        productConsumer.accept(laptop);
        productConsumer.accept(apple);
    }
}
import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.function.Consumer;
import java.util.stream.Collectors;

// Interface for displaying information
interface Displayable {
    void display();
}

// Abstract class representing a general Product
abstract class Product implements Displayable {
    protected String name;
    protected double price;

    public Product(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public abstract double getDiscountedPrice();

    @Override
    public void display() {
        System.out.println("Product: " + name + ", Price: $" + price);
    }
}

// Class representing an electronic product
class ElectronicProduct extends Product {
    private int warrantyMonths;

    public ElectronicProduct(String name, double price, int warrantyMonths) {
        super(name, price);
        this.warrantyMonths = warrantyMonths;
    }

    @Override
    public double getDiscountedPrice() {
        return price * 0.9; // 10% discount
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Warranty: " + warrantyMonths + " months");
    }
}

// Class representing a food product
class FoodProduct extends Product {
    private int calories;

    public FoodProduct(String name, double price, int calories) {
        super(name, price);
        this.calories = calories;
    }

    @Override
    public double getDiscountedPrice() {
        return price * 0.95; // 5% discount
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Calories: " + calories);
    }
}

// Generic class for a container
class Container<T extends Product> {
    private List<T> items = new ArrayList<>();

    public void add(T item) {
        items.add(item);
    }

    public void remove(T item) {
        items.remove(item);
    }

    public void displayAll() {
        items.forEach(Displayable::display);
    }
}

// Utility class for random operations
class RandomUtils {
    private static final Random random = new Random();

    public static int getRandomInt(int bound) {
        return random.nextInt(bound);
    }

    public static double getRandomDouble(double bound) {
        return random.nextDouble() * bound;
    }
}

// Main class demonstrating the use of the above classes
public class Main {
    public static void main(String[] args) {
        // Create some products
        ElectronicProduct laptop = new ElectronicProduct("Laptop", 1500, 24);
        FoodProduct apple = new FoodProduct("Apple", 0.5, 95);

        // Display product information
        laptop.display();
        apple.display();

        // Use a generic container
        Container<Product> productContainer = new Container<>();
        productContainer.add(laptop);
        productContainer.add(apple);

        System.out.println("\nAll products in container:");
        productContainer.displayAll();

        // Demonstrate the use of a lambda expression and streams
        System.out.println("\nDiscounted prices:");
        List<Product> products = List.of(laptop, apple);
        products.stream()
                .map(Product::getDiscountedPrice)
                .forEach(price -> System.out.printf("$%.2f\n", price));

        // Demonstrate utility class usage
        System.out.println("\nRandom numbers:");
        for (int i = 0; i < 5; i++) {
            System.out.println("Random int: " + RandomUtils.getRandomInt(100));
            System.out.println("Random double: " + RandomUtils.getRandomDouble(50));
        }

        // Demonstrate the use of a consumer functional interface
        Consumer<Product> productConsumer = p -> System.out.println("Consuming product: " + p.getName());
        productConsumer.accept(laptop);
        productConsumer.accept(apple);
    }
}

// Abstract class representing a general Product
abstract class Product implements Displayable {
    protected String name;
    protected double price;

    public Product(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public abstract double getDiscountedPrice();

    @Override
    public void display() {
        System.out.println("Product: " + name + ", Price: $" + price);
    }
}

// Class representing an electronic product
class ElectronicProduct extends Product {
    private int warrantyMonths;

    public ElectronicProduct(String name, double price, int warrantyMonths) {
        super(name, price);
        this.warrantyMonths = warrantyMonths;
    }

    @Override
    public double getDiscountedPrice() {
        return price * 0.9; // 10% discount
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Warranty: " + warrantyMonths + " months");
    }
}

// Class representing a food product
class FoodProduct extends Product {
    private int calories;

    public FoodProduct(String name, double price, int calories) {
        super(name, price);
        this.calories = calories;
    }

    @Override
    public double getDiscountedPrice() {
        return price * 0.95; // 5% discount
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Calories: " + calories);
    }
}

// Generic class for a container
class Container<T extends Product> {
    private List<T> items = new ArrayList<>();

    public void add(T item) {
        items.add(item);
    }

    public void remove(T item) {
        items.remove(item);
    }

    public void displayAll() {
        items.forEach(Displayable::display);
    }
}

// Utility class for random operations
class RandomUtils {
    private static final Random random = new Random();

    public static int getRandomInt(int bound) {
        return random.nextInt(bound);
    }

    public static double getRandomDouble(double bound) {
        return random.nextDouble() * bound;
    }
}

// Main class demonstrating the use of the above classes
public class Main {
    public static void main(String[] args) {
        // Create some products
        ElectronicProduct laptop = new ElectronicProduct("Laptop", 1500, 24);
        FoodProduct apple = new FoodProduct("Apple", 0.5, 95);

        // Display product information
        laptop.display();
        apple.display();

        // Use a generic container
        Container<Product> productContainer = new Container<>();
        productContainer.add(laptop);
        productContainer.add(apple);

        System.out.println("\nAll products in container:");
        productContainer.displayAll();

        // Demonstrate the use of a lambda expression and streams
        System.out.println("\nDiscounted prices:");
        List<Product> products = List.of(laptop, apple);
        products.stream()
                .map(Product::getDiscountedPrice)
                .forEach(price -> System.out.printf("$%.2f\n", price));

        // Demonstrate utility class usage
        System.out.println("\nRandom numbers:");
        for (int i = 0; i < 5; i++) {
            System.out.println("Random int: " + RandomUtils.getRandomInt(100));
            System.out.println("Random double: " + RandomUtils.getRandomDouble(50));
        }

        // Demonstrate the use of a consumer functional interface
        Consumer<Product> productConsumer = p -> System.out.println("Consuming product: " + p.getName());
        productConsumer.accept(laptop);
        productConsumer.accept(apple);
    }
}
