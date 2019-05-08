#pragma once
#include<string>
#include<vector>
#include<iostream>
using namespace std;


//Седан sedan// Внедорожник SUV // Пикап truck //автобус buc

enum carType
{
	sedan = 1, SUV, bus, truck
};

class car
{
	string model;
	carType type;
	string color;
public:
	car(string model, string color, carType type)
	{
		setModel(model);
		setColor(color);
		setType(type);
	}
	void setModel(const string & model) { this->model = model; }
	void setColor(const string & color) { this->color = color; }
	void setType(const carType & type) { this->type = type; }
	string getModel() { return model; }
	string getColor() { return color; }
	carType getType() { return type; }

	friend ostream& operator<<(ostream& os, const car& c)
	{
		cout << c.color << " " << c.model << " ";
		switch (c.type)
		{
		case sedan:
			cout << "sedan";
			break;
		case SUV:
			cout << "SUV";
			break;
		case bus:
			cout << "bus";
			break;
		case truck:
			cout << "truck";
			break;
		}
		cout << endl;
		return os;
	}


};


