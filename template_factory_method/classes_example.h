/**
 * This is a simple classes which can be generated by our template factory.
 **/

#include <iostream>
#include <string>

class Investment
{
    public:
    virtual ~Investment() = default;
};

//----------------------------------------------------------------------------------

class Stock: public Investment {
    public:
    Stock(const std::string& stockName, double discount) {
        std::cout << "Stock has created with name: " << stockName << " and disconunt: " << discount << std::endl;
    }
    
    virtual ~Stock() { std::cout << "Stock was destroed"; }
};

//----------------------------------------------------------------------------------

class Bond: public Investment {
    public:
    Bond(const std::string& bondName, const std::string& countryName) {
        std::cout << "Bond " << bondName << " has been created for country " << countryName << std::endl;
    }
    
    virtual ~Bond() { std::cout << "Bond was destroed"; }
};

//----------------------------------------------------------------------------------

class RealEstate: public Investment {
    public:
    RealEstate(const std::string& name, double price, const std::string& address) {
        std::cout << "Real estate " << name << " with price: " << price << " was bought. Address: " << address << std::endl;
    }
    
    virtual ~RealEstate() { std::cout << "Real estate was destroed"; }
};