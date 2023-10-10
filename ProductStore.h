#include<bits/stdc++.h>
#include "Product.h"
#ifndef PRODUCTSTORE_H
#define PRODUCTSTORE_H

using namespace std;

class ProductStore
{
	private:
	public:
		ProductStore();
		static void Create(vector<Product *> &, Product*);
		static void Read(vector<Product *> &);
		static bool Update(vector<Product *> &, Product *);
		static bool Delete(vector<Product *> &, int);
		~ProductStore();
	protected:
};

#endif
