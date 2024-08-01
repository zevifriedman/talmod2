#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// Base class for Animals
class Animal {#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// Base class for Animals
class Animal {
public:
    Animal(const std::string& name) : name(name) {}
    virtual ~Animal() {}

    virtual void Speak() const = 0;

protected:
    std::string name;
};

// Derived class for Dogs
class Dog : public Animal {
public:
    Dog(const std::string& name, const std::string& breed)
        : Animal(name), breed(breed) {}

    void Speak() const override {
        std::cout << name << " the " << breed << " says: Woof!\n";
    }

private:
    std::string breed;
};

// Derived class for Cats
class Cat : public Animal {
public:
    Cat(const std::string& name, const std::string& color)
        : Animal(name), color(color) {}

    void Speak() const override {
        std::cout << name << " the " << color << " cat says: Meow!\n";
    }

private:
    std::string color;
};

// Template class for a generic Pair
template<typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}

    void Print() const {
        std::cout << "Pair: (" << first << ", " << second << ")\n";
    }

private:
    T1 first;
    T2 second;
};

// Function to demonstrate STL usage
void demonstrateSTL() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Using std::for_each and a lambda function
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;

    // Using std::transform to modify elements
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int n) {
        return n * n;
    });

    // Printing the transformed elements
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;
}

// Function to demonstrate smart pointers
void demonstrateSmartPointers() {
    std::unique_ptr<Animal> dog = std::make_unique<Dog>("Rex", "German Shepherd");
    std::shared_ptr<Animal> cat = std::make_shared<Cat>("Whiskers", "Black");

    dog->Speak();
    cat->Speak();

    // Shared pointer usage
    std::vector<std::shared_ptr<Animal>> animals;
    animals.push_back(cat);
    animals.push_back(std::make_shared<Dog>("Buddy", "Labrador"));

    for (const auto& animal : animals) {
        animal->Speak();
    }
}

// Function to demonstrate custom deleter with unique_ptr
void demonstrateCustomDeleter() {
    std::unique_ptr<int, std::function<void(int*)>> customPtr(new int(42), [](int* ptr) {
        std::cout << "Custom deleter: Deleting integer with value " << *ptr << "\n";
        delete ptr;
    });

    std::cout << "Value in customPtr: " << *customPtr << std::endl;
}

// Main function
int main() {
    // Demonstrate polymorphism and inheritance
    std::unique_ptr<Animal> myDog = std::make_unique<Dog>("Max", "Bulldog");
    myDog->Speak();

    // Demonstrate template usage
    Pair<int, std::string> myPair(42, "The answer to life, the universe, and everything");
    myPair.Print();

    // Demonstrate STL algorithms and lambda functions
    demonstrateSTL();

    // Demonstrate smart pointers
    demonstrateSmartPointers();

    // Demonstrate custom deleter
    demonstrateCustomDeleter();

    return 0;
}
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// Base class for Animals
class Animal {
public:
    Animal(const std::string& name) : name(name) {}
    virtual ~Animal() {}

    virtual void Speak() const = 0;

protected:
    std::string name;
};

// Derived class for Dogs
class Dog : public Animal {
public:
    Dog(const std::string& name, const std::string& breed)
        : Animal(name), breed(breed) {}

    void Speak() const override {
        std::cout << name << " the " << breed << " says: Woof!\n";
    }

private:
    std::string breed;
};

// Derived class for Cats
class Cat : public Animal {
public:
    Cat(const std::string& name, const std::string& color)
        : Animal(name), color(color) {}

    void Speak() const override {
        std::cout << name << " the " << color << " cat says: Meow!\n";
    }

private:
    std::string color;
};

// Template class for a generic Pair
template<typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}

    void Print() const {
        std::cout << "Pair: (" << first << ", " << second << ")\n";
    }

private:
    T1 first;
    T2 second;
};

// Function to demonstrate STL usage
void demonstrateSTL() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Using std::for_each and a lambda function
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;

    // Using std::transform to modify elements
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int n) {
        return n * n;
    });

    // Printing the transformed elements
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;
}

// Function to demonstrate smart pointers
void demonstrateSmartPointers() {
    std::unique_ptr<Animal> dog = std::make_unique<Dog>("Rex", "German Shepherd");
    std::shared_ptr<Animal> cat = std::make_shared<Cat>("Whiskers", "Black");

    dog->Speak();
    cat->Speak();

    // Shared pointer usage
    std::vector<std::shared_ptr<Animal>> animals;
    animals.push_back(cat);
    animals.push_back(std::make_shared<Dog>("Buddy", "Labrador"));

    for (const auto& animal : animals) {
        animal->Speak();
    }
}

// Function to demonstrate custom deleter with unique_ptr
void demonstrateCustomDeleter() {
    std::unique_ptr<int, std::function<void(int*)>> customPtr(new int(42), [](int* ptr) {
        std::cout << "Custom deleter: Deleting integer with value " << *ptr << "\n";
        delete ptr;
    });

    std::cout << "Value in customPtr: " << *customPtr << std::endl;
}

// Main function
int main() {
    // Demonstrate polymorphism and inheritance
    std::unique_ptr<Animal> myDog = std::make_unique<Dog>("Max", "Bulldog");
    myDog->Speak();

    // Demonstrate template usage
    Pair<int, std::string> myPair(42, "The answer to life, the universe, and everything");
    myPair.Print();

    // Demonstrate STL algorithms and lambda functions
    demonstrateSTL();

    // Demonstrate smart pointers
    demonstrateSmartPointers();

    // Demonstrate custom deleter
    demonstrateCustomDeleter();

    return 0;
}
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// Base class for Animals
class Animal {
public:
    Animal(const std::string& name) : name(name) {}
    virtual ~Animal() {}

    virtual void Speak() const = 0;

protected:
    std::string name;
};

// Derived class for Dogs
class Dog : public Animal {
public:
    Dog(const std::string& name, const std::string& breed)
        : Animal(name), breed(breed) {}

    void Speak() const override {
        std::cout << name << " the " << breed << " says: Woof!\n";
    }

private:
    std::string breed;
};

// Derived class for Cats
class Cat : public Animal {
public:
    Cat(const std::string& name, const std::string& color)
        : Animal(name), color(color) {}

    void Speak() const override {
        std::cout << name << " the " << color << " cat says: Meow!\n";
    }

private:
    std::string color;
};

// Template class for a generic Pair
template<typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}

    void Print() const {
        std::cout << "Pair: (" << first << ", " << second << ")\n";
    }

private:
    T1 first;
    T2 second;
};

// Function to demonstrate STL usage
void demonstrateSTL() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Using std::for_each and a lambda function
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;

    // Using std::transform to modify elements
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int n) {
        return n * n;
    });

    // Printing the transformed elements
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;
}

// Function to demonstrate smart pointers
void demonstrateSmartPointers() {
    std::unique_ptr<Animal> dog = std::make_unique<Dog>("Rex", "German Shepherd");
    std::shared_ptr<Animal> cat = std::make_shared<Cat>("Whiskers", "Black");

    dog->Speak();
    cat->Speak();

    // Shared pointer usage
    std::vector<std::shared_ptr<Animal>> animals;
    animals.push_back(cat);
    animals.push_back(std::make_shared<Dog>("Buddy", "Labrador"));

    for (const auto& animal : animals) {
        animal->Speak();
    }
}

// Function to demonstrate custom deleter with unique_ptr
void demonstrateCustomDeleter() {
    std::unique_ptr<int, std::function<void(int*)>> customPtr(new int(42), [](int* ptr) {
        std::cout << "Custom deleter: Deleting integer with value " << *ptr << "\n";
        delete ptr;
    });

    std::cout << "Value in customPtr: " << *customPtr << std::endl;
}

// Main function
int main() {
    // Demonstrate polymorphism and inheritance
    std::unique_ptr<Animal> myDog = std::make_unique<Dog>("Max", "Bulldog");
    myDog->Speak();

    // Demonstrate template usage
    Pair<int, std::string> myPair(42, "The answer to life, the universe, and everything");
    myPair.Print();

    // Demonstrate STL algorithms and lambda functions
    demonstrateSTL();

    // Demonstrate smart pointers
    demonstrateSmartPointers();

    // Demonstrate custom deleter
    demonstrateCustomDeleter();

    return 0;
}
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// Base class for Animals
class Animal {
public:
    Animal(const std::string& name) : name(name) {}
    virtual ~Animal() {}

    virtual void Speak() const = 0;

protected:
    std::string name;
};

// Derived class for Dogs
class Dog : public Animal {
public:
    Dog(const std::string& name, const std::string& breed)
        : Animal(name), breed(breed) {}

    void Speak() const override {
        std::cout << name << " the " << breed << " says: Woof!\n";
    }

private:
    std::string breed;
};

// Derived class for Cats
class Cat : public Animal {
public:
    Cat(const std::string& name, const std::string& color)
        : Animal(name), color(color) {}

    void Speak() const override {
        std::cout << name << " the " << color << " cat says: Meow!\n";
    }

private:
    std::string color;
};

// Template class for a generic Pair
template<typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}

    void Print() const {
        std::cout << "Pair: (" << first << ", " << second << ")\n";
    }

private:
    T1 first;
    T2 second;
};

// Function to demonstrate STL usage
void demonstrateSTL() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Using std::for_each and a lambda function
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;

    // Using std::transform to modify elements
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int n) {
        return n * n;
    });

    // Printing the transformed elements
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;
}

// Function to demonstrate smart pointers
void demonstrateSmartPointers() {
    std::unique_ptr<Animal> dog = std::make_unique<Dog>("Rex", "German Shepherd");
    std::shared_ptr<Animal> cat = std::make_shared<Cat>("Whiskers", "Black");

    dog->Speak();
    cat->Speak();

    // Shared pointer usage
    std::vector<std::shared_ptr<Animal>> animals;
    animals.push_back(cat);
    animals.push_back(std::make_shared<Dog>("Buddy", "Labrador"));

    for (const auto& animal : animals) {
        animal->Speak();
    }
}

// Function to demonstrate custom deleter with unique_ptr
void demonstrateCustomDeleter() {
    std::unique_ptr<int, std::function<void(int*)>> customPtr(new int(42), [](int* ptr) {
        std::cout << "Custom deleter: Deleting integer with value " << *ptr << "\n";
        delete ptr;
    });

    std::cout << "Value in customPtr: " << *customPtr << std::endl;
}

// Main function
int main() {
    // Demonstrate polymorphism and inheritance
    std::unique_ptr<Animal> myDog = std::make_unique<Dog>("Max", "Bulldog");
    myDog->Speak();

    // Demonstrate template usage
    Pair<int, std::string> myPair(42, "The answer to life, the universe, and everything");
    myPair.Print();

    // Demonstrate STL algorithms and lambda functions
    demonstrateSTL();

    // Demonstrate smart pointers
    demonstrateSmartPointers();

    // Demonstrate custom deleter
    demonstrateCustomDeleter();

    return 0;
}
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// Base class for Animals
class Animal {
public:
    Animal(const std::string& name) : name(name) {}
    virtual ~Animal() {}

    virtual void Speak() const = 0;

protected:
    std::string name;
};

// Derived class for Dogs
class Dog : public Animal {
public:
    Dog(const std::string& name, const std::string& breed)
        : Animal(name), breed(breed) {}

    void Speak() const override {
        std::cout << name << " the " << breed << " says: Woof!\n";
    }

private:
    std::string breed;
};

// Derived class for Cats
class Cat : public Animal {
public:
    Cat(const std::string& name, const std::string& color)
        : Animal(name), color(color) {}

    void Speak() const override {
        std::cout << name << " the " << color << " cat says: Meow!\n";
    }

private:
    std::string color;
};

// Template class for a generic Pair
template<typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}

    void Print() const {
        std::cout << "Pair: (" << first << ", " << second << ")\n";
    }

private:
    T1 first;
    T2 second;
};

// Function to demonstrate STL usage
void demonstrateSTL() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Using std::for_each and a lambda function
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;

    // Using std::transform to modify elements
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int n) {
        return n * n;
    });

    // Printing the transformed elements
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;
}

// Function to demonstrate smart pointers
void demonstrateSmartPointers() {
    std::unique_ptr<Animal> dog = std::make_unique<Dog>("Rex", "German Shepherd");
    std::shared_ptr<Animal> cat = std::make_shared<Cat>("Whiskers", "Black");

    dog->Speak();
    cat->Speak();

    // Shared pointer usage
    std::vector<std::shared_ptr<Animal>> animals;
    animals.push_back(cat);
    animals.push_back(std::make_shared<Dog>("Buddy", "Labrador"));

    for (const auto& animal : animals) {
        animal->Speak();
    }
}

// Function to demonstrate custom deleter with unique_ptr
void demonstrateCustomDeleter() {
    std::unique_ptr<int, std::function<void(int*)>> customPtr(new int(42), [](int* ptr) {
        std::cout << "Custom deleter: Deleting integer with value " << *ptr << "\n";
        delete ptr;
    });

    std::cout << "Value in customPtr: " << *customPtr << std::endl;
}

// Main function
int main() {
    // Demonstrate polymorphism and inheritance
    std::unique_ptr<Animal> myDog = std::make_unique<Dog>("Max", "Bulldog");
    myDog->Speak();

    // Demonstrate template usage
    Pair<int, std::string> myPair(42, "The answer to life, the universe, and everything");
    myPair.Print();

    // Demonstrate STL algorithms and lambda functions
    demonstrateSTL();

    // Demonstrate smart pointers
    demonstrateSmartPointers();

    // Demonstrate custom deleter
    demonstrateCustomDeleter();

    return 0;
}
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// Base class for Animals
class Animal {
public:
    Animal(const std::string& name) : name(name) {}
    virtual ~Animal() {}

    virtual void Speak() const = 0;

protected:
    std::string name;
};

// Derived class for Dogs
class Dog : public Animal {
public:
    Dog(const std::string& name, const std::string& breed)
        : Animal(name), breed(breed) {}

    void Speak() const override {
        std::cout << name << " the " << breed << " says: Woof!\n";
    }

private:
    std::string breed;
};

// Derived class for Cats
class Cat : public Animal {
public:
    Cat(const std::string& name, const std::string& color)
        : Animal(name), color(color) {}

    void Speak() const override {
        std::cout << name << " the " << color << " cat says: Meow!\n";
    }

private:
    std::string color;
};

// Template class for a generic Pair
template<typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}

    void Print() const {
        std::cout << "Pair: (" << first << ", " << second << ")\n";
    }

private:
    T1 first;
    T2 second;
};

// Function to demonstrate STL usage
void demonstrateSTL() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Using std::for_each and a lambda function
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;

    // Using std::transform to modify elements
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int n) {
        return n * n;
    });

    // Printing the transformed elements
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;
}

// Function to demonstrate smart pointers
void demonstrateSmartPointers() {
    std::unique_ptr<Animal> dog = std::make_unique<Dog>("Rex", "German Shepherd");
    std::shared_ptr<Animal> cat = std::make_shared<Cat>("Whiskers", "Black");

    dog->Speak();
    cat->Speak();

    // Shared pointer usage
    std::vector<std::shared_ptr<Animal>> animals;
    animals.push_back(cat);
    animals.push_back(std::make_shared<Dog>("Buddy", "Labrador"));

    for (const auto& animal : animals) {
        animal->Speak();
    }
}

// Function to demonstrate custom deleter with unique_ptr
void demonstrateCustomDeleter() {
    std::unique_ptr<int, std::function<void(int*)>> customPtr(new int(42), [](int* ptr) {
        std::cout << "Custom deleter: Deleting integer with value " << *ptr << "\n";
        delete ptr;
    });

    std::cout << "Value in customPtr: " << *customPtr << std::endl;
}

// Main function
int main() {
    // Demonstrate polymorphism and inheritance
    std::unique_ptr<Animal> myDog = std::make_unique<Dog>("Max", "Bulldog");
    myDog->Speak();

    // Demonstrate template usage
    Pair<int, std::string> myPair(42, "The answer to life, the universe, and everything");
    myPair.Print();

    // Demonstrate STL algorithms and lambda functions
    demonstrateSTL();

    // Demonstrate smart pointers
    demonstrateSmartPointers();

    // Demonstrate custom deleter
    demonstrateCustomDeleter();

    return 0;
}
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// Base class for Animals
class Animal {
public:
    Animal(const std::string& name) : name(name) {}
    virtual ~Animal() {}

    virtual void Speak() const = 0;

protected:
    std::string name;
};

// Derived class for Dogs
class Dog : public Animal {
public:
    Dog(const std::string& name, const std::string& breed)
        : Animal(name), breed(breed) {}

    void Speak() const override {
        std::cout << name << " the " << breed << " says: Woof!\n";
    }

private:
    std::string breed;
};

// Derived class for Cats
class Cat : public Animal {
public:
    Cat(const std::string& name, const std::string& color)
        : Animal(name), color(color) {}

    void Speak() const override {
        std::cout << name << " the " << color << " cat says: Meow!\n";
    }

private:
    std::string color;
};

// Template class for a generic Pair
template<typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}

    void Print() const {
        std::cout << "Pair: (" << first << ", " << second << ")\n";
    }

private:
    T1 first;
    T2 second;
};

// Function to demonstrate STL usage
void demonstrateSTL() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Using std::for_each and a lambda function
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;

    // Using std::transform to modify elements
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int n) {
        return n * n;
    });

    // Printing the transformed elements
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;
}

// Function to demonstrate smart pointers
void demonstrateSmartPointers() {
    std::unique_ptr<Animal> dog = std::make_unique<Dog>("Rex", "German Shepherd");
    std::shared_ptr<Animal> cat = std::make_shared<Cat>("Whiskers", "Black");

    dog->Speak();
    cat->Speak();

    // Shared pointer usage
    std::vector<std::shared_ptr<Animal>> animals;
    animals.push_back(cat);
    animals.push_back(std::make_shared<Dog>("Buddy", "Labrador"));

    for (const auto& animal : animals) {
        animal->Speak();
    }
}

// Function to demonstrate custom deleter with unique_ptr
void demonstrateCustomDeleter() {
    std::unique_ptr<int, std::function<void(int*)>> customPtr(new int(42), [](int* ptr) {
        std::cout << "Custom deleter: Deleting integer with value " << *ptr << "\n";
        delete ptr;
    });

    std::cout << "Value in customPtr: " << *customPtr << std::endl;
}

// Main function
int main() {
    // Demonstrate polymorphism and inheritance
    std::unique_ptr<Animal> myDog = std::make_unique<Dog>("Max", "Bulldog");
    myDog->Speak();

    // Demonstrate template usage
    Pair<int, std::string> myPair(42, "The answer to life, the universe, and everything");
    myPair.Print();

    // Demonstrate STL algorithms and lambda functions
    demonstrateSTL();

    // Demonstrate smart pointers
    demonstrateSmartPointers();

    // Demonstrate custom deleter
    demonstrateCustomDeleter();

    return 0;
}
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// Base class for Animals
class Animal {
public:
    Animal(const std::string& name) : name(name) {}
    virtual ~Animal() {}

    virtual void Speak() const = 0;

protected:
    std::string name;
};

// Derived class for Dogs
class Dog : public Animal {
public:
    Dog(const std::string& name, const std::string& breed)
        : Animal(name), breed(breed) {}

    void Speak() const override {
        std::cout << name << " the " << breed << " says: Woof!\n";
    }

private:
    std::string breed;
};

// Derived class for Cats
class Cat : public Animal {
public:
    Cat(const std::string& name, const std::string& color)
        : Animal(name), color(color) {}

    void Speak() const override {
        std::cout << name << " the " << color << " cat says: Meow!\n";
    }

private:
    std::string color;
};

// Template class for a generic Pair
template<typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}

    void Print() const {
        std::cout << "Pair: (" << first << ", " << second << ")\n";
    }

private:
    T1 first;
    T2 second;
};

// Function to demonstrate STL usage
void demonstrateSTL() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Using std::for_each and a lambda function
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;

    // Using std::transform to modify elements
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int n) {
        return n * n;
    });

    // Printing the transformed elements
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;
}

// Function to demonstrate smart pointers
void demonstrateSmartPointers() {
    std::unique_ptr<Animal> dog = std::make_unique<Dog>("Rex", "German Shepherd");
    std::shared_ptr<Animal> cat = std::make_shared<Cat>("Whiskers", "Black");

    dog->Speak();
    cat->Speak();

    // Shared pointer usage
    std::vector<std::shared_ptr<Animal>> animals;
    animals.push_back(cat);
    animals.push_back(std::make_shared<Dog>("Buddy", "Labrador"));

    for (const auto& animal : animals) {
        animal->Speak();
    }
}

// Function to demonstrate custom deleter with unique_ptr
void demonstrateCustomDeleter() {
    std::unique_ptr<int, std::function<void(int*)>> customPtr(new int(42), [](int* ptr) {
        std::cout << "Custom deleter: Deleting integer with value " << *ptr << "\n";
        delete ptr;
    });

    std::cout << "Value in customPtr: " << *customPtr << std::endl;
}

// Main function
int main() {
    // Demonstrate polymorphism and inheritance
    std::unique_ptr<Animal> myDog = std::make_unique<Dog>("Max", "Bulldog");
    myDog->Speak();

    // Demonstrate template usage
    Pair<int, std::string> myPair(42, "The answer to life, the universe, and everything");
    myPair.Print();

    // Demonstrate STL algorithms and lambda functions
    demonstrateSTL();

    // Demonstrate smart pointers
    demonstrateSmartPointers();

    // Demonstrate custom deleter
    demonstrateCustomDeleter();

    return 0;
}

public:
    Animal(const std::string& name) : name(name) {}
    virtual ~Animal() {}

    virtual void Speak() const = 0;

protected:
    std::string name;
};

// Derived class for Dogs
class Dog : public Animal {
public:
    Dog(const std::string& name, const std::string& breed)
        : Animal(name), breed(breed) {}

    void Speak() const override {
        std::cout << name << " the " << breed << " says: Woof!\n";
    }

private:
    std::string breed;
};

// Derived class for Cats
class Cat : public Animal {
public:
    Cat(const std::string& name, const std::string& color)
        : Animal(name), color(color) {}

    void Speak() const override {
        std::cout << name << " the " << color << " cat says: Meow!\n";
    }

private:
    std::string color;
};

// Template class for a generic Pair
template<typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}

    void Print() const {
        std::cout << "Pair: (" << first << ", " << second << ")\n";
    }

private:
    T1 first;
    T2 second;
};

// Function to demonstrate STL usage
void demonstrateSTL() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Using std::for_each and a lambda function
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;

    // Using std::transform to modify elements
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int n) {
        return n * n;
    });

    // Printing the transformed elements
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << std::endl;
}

// Function to demonstrate smart pointers
void demonstrateSmartPointers() {
    std::unique_ptr<Animal> dog = std::make_unique<Dog>("Rex", "German Shepherd");
    std::shared_ptr<Animal> cat = std::make_shared<Cat>("Whiskers", "Black");

    dog->Speak();
    cat->Speak();

    // Shared pointer usage
    std::vector<std::shared_ptr<Animal>> animals;
    animals.push_back(cat);
    animals.push_back(std::make_shared<Dog>("Buddy", "Labrador"));

    for (const auto& animal : animals) {
        animal->Speak();
    }
}

// Function to demonstrate custom deleter with unique_ptr
void demonstrateCustomDeleter() {
    std::unique_ptr<int, std::function<void(int*)>> customPtr(new int(42), [](int* ptr) {
        std::cout << "Custom deleter: Deleting integer with value " << *ptr << "\n";
        delete ptr;
    });

    std::cout << "Value in customPtr: " << *customPtr << std::endl;
}

// Main function
int main() {
    // Demonstrate polymorphism and inheritance
    std::unique_ptr<Animal> myDog = std::make_unique<Dog>("Max", "Bulldog");
    myDog->Speak();

    // Demonstrate template usage
    Pair<int, std::string> myPair(42, "The answer to life, the universe, and everything");
    myPair.Print();

    // Demonstrate STL algorithms and lambda functions
    demonstrateSTL();

    // Demonstrate smart pointers
    demonstrateSmartPointers();

    // Demonstrate custom deleter
    demonstrateCustomDeleter();

    return 0;
}
