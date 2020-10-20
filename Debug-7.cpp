#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <cmath>
using namespace std;

// This code is designed to approximate the square root of 2.
// Remember that the square root of 2 is simply the number that square to 2.
double middle;
double lowApprox = 1;
double highApprox = 2;

// changed int x to double x so it outputs decimal values
double square(double x){
  //retruns x*x so that we can take the value and use it in other places
  return x*x;
}

int main() {

// The algorithm is fine. It's worthwhile to look it over and decipher it's inner-workings.    
if (square(lowApprox)<2 && square(highApprox)>2){
    while (abs(lowApprox-highApprox)>.0000001){
        middle = (lowApprox+highApprox)/2;
        if (square(middle)<2){
            lowApprox = middle;
        }
        if (square(middle)>2){
            highApprox = middle;
        }
	if (square(middle)==2){
	    break;
	}        
    }
}
cout << "The square root of 2 is approximately " << middle;
	return 0;
}
