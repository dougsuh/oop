#include <iostream>
#include <string>

class Animal {
protected:
	std::string m_name;
	Animal(const std::string &name) : m_name(name) { }
public:
	const std::string& getName() const { return m_name; }
	virtual std::string speak() const { return "???"; }
};
class Cat : public Animal {
public:
	Cat(const std::string &name) : Animal(name) {	}
	std::string speak() const { return "Meow"; }
};
class Dog : public Animal {
public:
	Dog(const std::string &name) : Animal(name) { 	}
	std::string speak() const { return "Woof"; }
};
int main()
{
	Cat fred("Fred");
	Cat misty("Misty");
	Cat zeke("Zeke");

	Dog garbo("Garbo");
	Dog pooky("Pooky");
	Dog truffle("Truffle");

	// Set up an array of pointers to animals, 
	// and set those pointers to our Cat and Dog objects
	Animal *animals[]{ &fred, &garbo, &misty, &pooky, &truffle, &zeke };
	for (const auto animal : animals)
		std::cout << animal->getName() << " says " << animal->speak() << '\n';
	getchar();
	return 123;
}
