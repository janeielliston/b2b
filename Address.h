#include <string>

class Address{
 private:
    std::string streetAddress;
	std::string city;
	std::string state;
	std::string zipCode;
    
 public:
    //No argument constructor
	Address();
    //Constructor that accepts member variables
	Address(std::string, std::string, std::string, std::string);
    
    //Accessor and Mutator functions
	void setStreetAddress(std::string);
	void setCity(std::string); 
	void setState(std::string);
	void setZipCode(std::string);
	std::string getStreetAddress();
	std::string getCity();
	std::string getState();
	std::string getZipCode();
    void getAddress();
};
