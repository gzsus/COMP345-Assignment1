#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Order {
public:
	Order(); //Default constructor

	bool validate();
	void execute();

	std::string Type;
	Order& operator=(const Order& right); //Assignment operator
private:
	bool hasBeenExecuted;
	friend std::ostream& operator<<(std::ostream&, const Order&);
};


class Deploy : public Order {

public:
	Deploy();
	Deploy(const Order& order);//Copy constructor
};


class Bomb : public Order {
public:
	Bomb();
	Bomb(const Order& order);//Copy constructor

};


class Advance : public Order {
public:
	Advance();
	Advance(const Order& order);//Copy constructor
};


class Blockade : public Order {
public:
	Blockade();
	Blockade(const Order& order);//Copy constructor
};


class Airlift : public Order {
public:
	Airlift();
	Airlift(const Order& order);//Copy constructor
};


class Negotiate : public Order {
public:
	Negotiate();
	Negotiate(const Order& order);//Copy constructor
};


class OrdersList {
public:
	~OrdersList(); //Destructor
	void delete_order(int position);

	void move(int currentPosition, int desiredPosition);

	void setList(std::vector<Order*> list);

	std::vector<Order*> getList();
private:
	std::vector<Order*> ListOfOrders;
};




