#include <iostream>
#include <string>
#include "Address.h"

using namespace std;

 //No argument constructor
  Address::Address();
  //Constructor that accepts member variables
  Address::Address(std::string SA, std::string C, std::string S, std::string Z){
   streetAddress = SA;
   city = C;
   state = S;
   zipCode = Z;
  }
    
  //Accessor and Mutator functions
  void Address::setStreetAddress(std::string adrs){
    streetAddress = adrs;  
  }
  void Address::setCity(std::string ct){
    city = ct; 
  } 
  void Address::setState(std::string st){
    state = st;  
  }
  void Address::setZipCode(std::string zip){
    zipCode = zip; 
  }
  string Address::getStreetAddress(){return streetAddress;}
  string Address::getCity(){return city;}
  string Address::getState(){return state;}
  string Address::getZipCode(){return zipCode;}
  void Address::getAddress(){
      cout << streetAddress << " |" << endl << city <<
          ", " << state << " " << zipCode;
  }
