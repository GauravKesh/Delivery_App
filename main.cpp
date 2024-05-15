#include <iostream>
using namespace std;

class Main{
private:
	int veg_price = 200;
	int nonveg_price = 300;
	int topping_price= 100;
	int delivery_price = 50;
	int extraCheese_price = 70;
	bool veg{};
public:
	int topping(){
		return this->topping_price;
	}
	int delivery(){
		return this->delivery_price;
	}int extraCheese(){
		return this->extraCheese_price;
	}

	int pizzaOrder(bool type_pizza){
		this->veg = type_pizza;
	}

	int Order(bool food_type){
		pizzaOrder(food_type);
		if(veg){
			return veg_price;
		}
		else{
			return nonveg_price;
		}

	}
};

class User{
public:
	void order(){
		cout<<"Choose type of your pizza"
		cout<<"order your pizza";
		Main user1 ;
		int p = user1.Order(true)+user1.topping()+user1.delivery();
		int price = p;
		cout<<endl<<price;
	}


};

int main(){
	User user1;
	user1.order();
}