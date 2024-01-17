#include <iostream>

using namespace std;

class Car {
private:
	double price;
	string color;
	string model;
	double engineVolume;
public:
	void SetCar(double price, string color,
		string model,
		double engineVolume) {

		this->price = price;
		this->color = color;
		this->model = model;
		this->engineVolume = engineVolume;
	};
	double GetCar() {
		return price;
		return engineVolume;
	};
	string GetCars() {
		return color;
		return model;
	};
	void show() {
		cout << "price:" << price << " $" << endl
			<< "color:" << color << endl
			<< "model:" << model << endl
			<< "engineVolume: " << engineVolume << " l." << endl << endl;
	};
};

int main() {
	Car firstCar, secondCar, thirdCar, fourthCar;
	firstCar.SetCar(33954.3, "black", "sedan", 8.1);
	secondCar.SetCar(32954.3, "red", "minivan", 8.2);
	thirdCar.SetCar(31954.3, "white", "crossover", 8.3);
	fourthCar.SetCar(35954.3, "green", "limousine", 8.4);

 	firstCar.show();
	secondCar.show();
	thirdCar.show();
	fourthCar.show();
	return 0;
}