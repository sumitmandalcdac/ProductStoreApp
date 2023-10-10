#include<bits/stdc++.h>
#include "Product.h"

using namespace std;

Product::Product()
{	
}
Product::Product(int id, string name, double unitPrice, int quantity,int likes)
{
	this->id=id;
	this->name=name;
	this->unitPrice=unitPrice;
	this->quantity=quantity;
	this->likes=likes;
}

int Product::getId(){
	return id;
}
string Product::getName(){
	return name;
}
double Product::getPrice(){
	return unitPrice;
}
int Product::getQuantity(){
	return quantity;
}
int Product::getLikes(){
	return likes;
}

void Product::setName(string name){
	this->name=name;
}
void Product::setPrice(double unitPrice){
	this->unitPrice=unitPrice;
}
void Product::setQuantity(int quantity){
	this->quantity=quantity;
}
void Product::setLikes(int likes){
	this->likes=likes;
}

Product::~Product()
{
}
