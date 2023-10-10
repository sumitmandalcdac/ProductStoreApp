#include<bits/stdc++.h>
#include "ProductStore.h"

using namespace std;

ProductStore::ProductStore()
{
}

void ProductStore::Create(vector<Product*> &productArray, Product *singleProduct){
	productArray.push_back(singleProduct);
}

void ProductStore::Read(vector<Product *> &productArray){
	for(int i=0;i<productArray.size();i++){
		Product *singleProduct=productArray[i];
		cout<<"Product "<<i+1<<" details ----"<<endl;
		cout<<"Id = "<<singleProduct->getId()<<endl;
		cout<<"Product name : "<<singleProduct->getName()<<endl;
		cout<<"Product unit price : "<<singleProduct->getPrice()<<endl;
		cout<<"Product quantity : "<<singleProduct->getQuantity()<<endl;
		cout<<"Product likes : "<<singleProduct->getLikes()<<endl;
	}	
}

bool ProductStore::Update(vector<Product *> &productArray, Product *updateProduct){
	for(int i=0;i<productArray.size();i++){
		Product *singleProduct=productArray[i];
		if(singleProduct->getId()==updateProduct->getId()){
			singleProduct->setName(updateProduct->getName());
			singleProduct->setPrice(updateProduct->getPrice());
			singleProduct->setQuantity(updateProduct->getQuantity());
			singleProduct->setLikes(updateProduct->getLikes());
			return true;
			break;
		}
	}
	return false;
}
bool ProductStore::Delete(vector<Product *> &productArray, int productId){
	for(int i=0;i<productArray.size();i++){
		Product *singleProduct=productArray[i];
		if(singleProduct->getId()==productId){
			productArray.erase(productArray.begin()+i);
			return true;
			break;
		}
	}
	return false;
}

ProductStore::~ProductStore()
{
}
