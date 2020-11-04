#ifndef TEMPTRENDER_H
#define TEMPTRENDER_H

#include <string>


class tempTrender {
	public:
        tempTrender(std::string filePath); //Construct using the specified file
	    ~tempTrender() {} //Destructor
        
        void setFilePath(std::string); 
        std::string getFilePath();
            
	    //void tempOnDay(int monthToCalculate, int dayToCalculate); //Make a histogram of the temperature on this day
	    //void tempOnDay(int dateToCalculate); //Make a histogram of the temperature on this date
	    void tempPerDay(); //Make a histogram of the average temperature of each day of the year
	    void hotCold(); //Make a histogram of the hottest and coldest day of the year
	    //void tempPerYear(int yearToExtrapolate); //Make a histogram of average temperature per year, then fit and extrapolate to the given year

	private:
        std::string pFilePath;
        
    
    std::string helpString;
    
    Int_t Year;
    Int_t Month;
    Int_t Date;
    Double_t Temp;
    Int_t ID;
    Int_t counter;
    Int_t firstYear; //year month day (ID) of the hottest/coldest day each year
};

#endif
