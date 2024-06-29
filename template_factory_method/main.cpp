#include "template_factory.h"
#include "classes_example.h"


/**
 * In this example we create shared_ptr from unique_ptr, which returns makeInvestment function.
 * Function is being instantiated from "RealEstate" typename.
 * All input parameters are being forwarded to RealEstate's constructor
 * */
int main()
{
    std::shared_ptr<Investment> someInvestment = 
    	makeInvestment<RealEstate>( "Halupa", 0.234, "Pushkin str., Kolotushkin haus.");

    std::shared_ptr<Investment> someInvestment2 = 
    	makeInvestment<Bond>( "OutObligations", "Ukraine");

    std::shared_ptr<Investment> someInvestment3 = 
    	makeInvestment<Stock>( "Some stock", 0.15);	
    
    return 0;
}