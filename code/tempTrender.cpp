#include <iostream>
#include <string>
#include "tempTrender.h"

tempTrender::tempTrender(std::string filePath) {
    std::cout << "The user supplied " << filePath << " as the path to the data file." << std::endl;
    tempTrender::setFilePath(filePath);

}

void tempTrender::setFilePath(std::string filePath) {
    pFilePath = filePath;
}

std::string tempTrender::getFilePath() {
    return pFilePath;
}

void tempTrender::tempPerDay() {
    
    // Uppsala data only has average temperatures
    // If we don't find uppsala in filepath we must do some calculations first.
    std::string uppsala = "uppsala";
    if (pFilePath.find(uppsala) == std::string::npos) {
        std::cout << "We didn't find uppsala!" << std::endl;

        // Here we calculate the average temperature for each day. (If not uppsala data)
    }

    // Here we can start plotting the average temperature for each day (For uppsala we already have this)
    
    //for hotcold, Make a histogram of the hottest and coldest day of the year for uppsala
    
    void tempTrender::hotCold() { 
     ifstream file("filePath"); //open input file 
     
     // Test to see if we find Uppsala in the filepath.
    std::string uppsala = "uppsala";
    if (pFilePath.find(uppsala) == std::string::npos) {
        std::cout << "We didn't find Uppsala in the given filepath" << std::endl;
     Int_t n = 0; //counter initialized
     string helpString; //help variable
     
     while(getline(file, helpString)) n++; ) nEntries = n;//to get number of entries in dataset
     
      //Notes: "pick out" correct data from file, hottest/ coldest day of each year
      //Find minimum/maximum each year? Int_t binmax = hist->GetMaximumBin(); Double_t x = hist->GetXaxis()->GetBinCenter(binmax) 
      //How do we get what binnumber this corresponds to? year month day
      //
      // 
      cout << "Year" << year << "Month :" << month << "Date : " << date <<  endl;
      nEntries++;
  
      TH1D histhotCold = new TH1D("histhotCold", "Histogram", 365, -50, 50); //not sure if I have written this correctly 
      ??->??("histhotCold", "x", "y"); //read in data and set the right parameters?
      histhotCold->GetMean();
      histhotCold->GetStdDev();
      
      histhotCold->Draw();
  
 }
}

//from project instructions to get the mean/plot right.
double Gaussian(double* x, double* par) {

  return par[0]*exp(-0.5*(x[0]*[0] - 2*x[0]*par[1] + 
     par[1]*par[1]/(par[2]*par[2]));

}

TF1* func= new TF1("Gaussian", Gaussian, 1, 366, 3);
func->SetParameters(5, 200, 50); //Starting values for fitting
hist->Fit(func, "Q0R");

cout << "The mean is " << func->GetParameter(1) << endl;
cout << "Its uncertainty is " << func->GetParError(1) << endl;

TLegend *leg = new TLegend(0.65, 0.75, 0.92, 0.92, "", "NDC");
leg->SetFillStyle(0);//Transparent fill
leg->SetBorderSize(0);//Get rid of the border
leg->AddEntry(hist, "", "F"); //Use object title draw fill
leg->AddEntry(anotherHist, "A title", "F"); //Use custom title

hist->Draw();
anotherHist->Draw("SAME"); //To get it in the same plot
leg->Draw(); //Legends dont need "SAME" to be drawn in same plot
    

}

