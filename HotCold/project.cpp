#include "tempTrender.h"
#include <string>

void project() {
    std::string pathToFile = "cleandata_uppsala.csv"; //Put the path to your data file here
	tempTrender t(pathToFile); //Instantiate your analysis object
	
	//t.tempOnDay(8, 23); //Call some functions that you've implemented
	//t.tempOnDay(235);
	//t.tempPerDay();
	t.hotCold();
	//t.tempPerYear(2050);
}
