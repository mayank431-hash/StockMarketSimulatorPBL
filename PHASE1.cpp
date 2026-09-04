#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Stock{
    string symbol;
    string name;
    double price;


};
// The market is just  a vectoror List of stocks 
vector <Stock> market;
// User's virtual cash to start with
double balance = 100000.0; 

// Filling the market with some stocks
void setupMarket(){
    market.push_back({"TCS", "Tata Consultancy Services", 3800.0});
    market.push_back({"INFY", "Infosys Ltd", 1550.0});
    market.push_back({"RELIANCE", "Reliance Industries", 2950.0});
    market.push_back({"HDFC", "HDFC Bank Ltd", 1650.0});
    market.push_back({"WIPRO", "Wipro Ltd", 480.0});
    market.push_back({"ITC", "ITC Ltd", 430.0});
    market.push_back({"SBIN", "State Bank of India", 810.0});
}