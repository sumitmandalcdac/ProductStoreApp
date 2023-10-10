#include<bits/stdc++.h>
#ifndef PRODUCT_H
#define PRODUCT_H

using namespace std;

class Product
{
	private:
		int id;
		string name;
		double unitPrice;
		int quantity;
		int likes;
	public:
		Product();
		Product(int, string, double, int,int);
		// Getters		
		int getId();
		string getName();
		double getPrice();
		int getQuantity();
		int getLikes();
		// Setters
		void setName(string);
		void setPrice(double);
		void setQuantity(int);
		void setLikes(int);
		~Product();
	protected:
};

#endif
