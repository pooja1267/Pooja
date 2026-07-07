#include<iostream>
#include<vector>
using namespace std;
class ProductOfNumbers {
public:
    ProductOfNumbers() {
       // cout<<"Prod constructor called"<<endl;
        product.clear();
        }
    
    void add(int num) {
        if(num)
        {
            if(product.empty())
                product.push_back(num);
            else
                product.push_back(product[product.size()-1]*num);
        }
        else
            product.clear();

       // traverse();
    }

    void traverse()
    {
        for(auto i : product)
            cout<<i<<"\t";

        cout<<endl;
    }
    
    int getProduct(int k) {
        if(k < product.size())
        {
            return (product[product.size()-1]/product[product.size()-k-1]);
        }
        
        else if(k == product.size())
        {
       
            return product[product.size()-1];
        }
        else
        { 
            return 0;
        }

    }
    private : 
        vector<int> product;
};


