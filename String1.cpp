//
//  main.cpp
//  PreSession2
//
//  Created by Pooja Chowdhary on 7/13/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int atoint(const string &A) {
    
    long ans = 0;
    bool foundNumber = false;
    bool isMinusPresent = false;
    
    for (int i = 0; i < A.length(); i++) {
        
        long temp = A[i] - '0';
        if (temp == -5) {
            foundNumber = true;
            continue;
        }
        else if ((temp == -3) && (foundNumber == false)) {
            foundNumber = true;
            isMinusPresent = true;
            continue;
        }
        else if (temp >= 0 && temp <= 9) {
            
            if (foundNumber == false) {
                ans = temp;
                foundNumber = true;
            }
            else {
                
                long sum = INT_MAX;
                long temp1 = sum - (ans * 10);
                if (sum - (ans * 10) > temp) {
                    ans = (ans*10)+temp;
                }
                else {
                    if (isMinusPresent && (sum - (ans * 10) < temp)) {
                        return INT_MIN;
                    }
                    else {
                        return INT_MAX;
                    }
                }
            }
            
        }
        else {
            if ((foundNumber == false) && (temp == -16)) {
                continue;
            }
            else {
                break;
            }
        }
        
    }
    if (isMinusPresent) {
        long sum = ans * -1;
        if (sum < INT_MIN) {
            return INT_MIN;
        }
        return ans * -1;
    }
    return ans;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << INT_MAX << " " << INT_MIN << endl;
    
//    string A = "-88297 248252140B12 37239U4622733246I218 9 1303 44 A83793H3G2 1674443R591 4368 7 97";
 //    string A = "- 5 88C340185Q 71 8079 834617385 2898422X5297Z6900";
//     string A = "5121478262 8070067M75 X199R 547 8C0A11 93I630 4P4071 029W433619 M3 5 14703818 776366059B9O43393";
    
//    string A = "V515V 5793K 627 23815945269 1 1249794L 631 8755 7";
//    string A = "-54332872018247709407 4 54";
     string A = "+7";
    cout << atoint(A) << endl;
    
    
    
    return 0;
}
