//
//  main.cpp
//  PreSession5
//
//  Created by Pooja Chowdhary on 7/13/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int maxSubArray(const vector<int> &A) {
    int maxtotal = 0;
    vector<int> C;
    C.reserve(2*A.size()*log2(A.size()));
    
    for (int i = A.size()-1; i >= 0; i--) {
        int temp = 0;
         for (int j = i; j >= 0; j--) {
             if (i == j) {
                 temp = A[j];
                 C.push_back(temp);
             }
             else {
                 temp = temp + A[j];
                 C.push_back(temp);
             }
         }
    }
    if (A.size() > 0) {
        maxtotal = *max_element(C.begin(), C.end());
    }
    
    return maxtotal;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    vector<int> A = {-2,1,-3,4,-1,2,1,-5,4};
//    vector<int> A = {};

    cout << maxSubArray(A) << endl;
    
    return 0;
}
