#include <iostream>
#include <string>
using namespace std; 

class Car {
private:
	int price;
	string colour;
	string model;
	int engineCapacity;
public:
	Car(string model, int engineCapacity, int price, string colour) {
		this->model = model;
		this->engineCapacity = engineCapacity;
		this->price = price;
		this->colour = colour;
	}
	string getShowAll() {
		return " Model: " + model +	", the engine capacity of the car: " +
			to_string(engineCapacity) + " liters, price: " + to_string(price) + " rub, colour: " + colour;
	}
	string getShowMP() {
		return " Model: " + model + ", price: " + to_string(price) + " rub";
	}
	void showAll() {
		cout << getShowAll()<<endl<<endl;
	}
	void showMP() {
		cout << getShowMP() << endl<<endl;
	}
};



void main() {
	Car car1 ("BMW X5", 3, 6500000, "white");
	car1.showAll();

	Car car2("Audi R8", 5.2, 22900000, "silver");
	car2.showAll();

	Car car3("Ford Focus", 2, 950000, "black");
	car3.showAll();

	Car car4("Mitsubishi Outlander", 2, 1400000, "gray");
	car4.showAll();

	car1.showMP();
	car4.showMP();
}