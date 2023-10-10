#include<bits/stdc++.h>
#include "ProductStore.h"
#include "Product.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<Product *> productArray;
	cout<<"Enter 1 to Add a new product."<<endl;
	cout<<"Enter 2 to Display all the products."<<endl;
	cout<<"Enter 3 to Update a product."<<endl;
	cout<<"Enter 4 to Delete a product."<<endl;
	cout<<"Enter 5 to Exit."<<endl;
	int choice;
	do{
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice){
			case 1:{
				int id;
				string name;
				double unitPrice;
				int quantity;
				int likes;
				cout<<"Enter product id : ";
				cin>>id;
				cout<<"Enter product name : ";
				cin>>name;
				cout<<"Enter product price : ";
				cin>>unitPrice;
				cout<<"Enter product quantity : ";
				cin>>quantity;
				cout<<"Enter product likes : ";
				cin>>likes;
				Product *tempProductPtr = new Product(id, name, unitPrice, quantity, likes);
				ProductStore::Create(productArray, tempProductPtr);
				break;
			}
			case 2:{
				ProductStore::Read(productArray);
				break;
			}
			case 3:{
				int id;
				string name;
				double unitPrice;
				int quantity;
				int likes;
				cout<<"Enter product id : ";
				cin>>id;
				cout<<"Enter product name : ";
				cin>>name;
				cout<<"Enter product price : ";
				cin>>unitPrice;
				cout<<"Enter product quantity : ";
				cin>>quantity;
				cout<<"Enter product likes : ";
				cin>>likes;
				Product *tempProductPtr = new Product(id, name, unitPrice, quantity, likes);
				bool isUpdated;
				isUpdated = ProductStore::Update(productArray, tempProductPtr);
				if(isUpdated){
					cout<<"The product with id "<<id<<" has been updated!"<<endl;
				} else {
					cout<<"You have not added any product with that product id."<<id<<"."<<endl;
				}
				break;
				break;
			}
			case 4:{
				int productId;
				cout<<"Enter the product id : ";
				cin>>productId;
				bool isDeleted;
				isDeleted = ProductStore::Delete(productArray, productId);
				if(isDeleted){
					cout<<"The product with id "<<productId<<" has been deleted!"<<endl;
				} else {
					cout<<"You have not added any product with that product id."<<productId<<"."<<endl;
				}
				break;
			}
			case 5:{
				cout<<"Thank you for using our application!"<<endl;
				break;
			}
			default:{
				cout<<"That is not a valid option!"<<endl;
				break;
			}
		}
	}while(choice != 5);
	return 0;
}
