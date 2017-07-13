//
//  main.cpp
//  PreSession6
//
//  Created by Pooja Chowdhary on 7/13/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > generateVec(int A) {
    vector<vector<int>> B;
    int val;
    vector<int> C;
    for (int i = 0; i < A; i++) {
        val = 1;
        for (int j = 0; j <=i ; j++) {
            
            C.push_back(val);
            val = val * (i - j) / (j + 1);
        }
        B.push_back(C);
        C.clear();
    }
    return B;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    vector<vector<int>> B = generateVec(7);
    return 0;
}
