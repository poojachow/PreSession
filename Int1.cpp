//
//  main.cpp
//  PreSession4
//
//  Created by Pooja Chowdhary on 7/13/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> wave(vector<int> &A) {
    vector<int> B = A;
    
    sort(B.begin(), B.end());
    for (int i = 0; i < B.size(); i++) {
        if (i%2 == 0) {
            if (i+1 < B.size()) {
                int temp = B[i];
                B[i] = B[i+1];
                B[i+1] = temp;
            }
        }
        else {
            continue;
        }
    }
    
    return B;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    vector<int> A = {4, 2, 1, 3, 0};
    vector<int> b = wave(A);
    
    return 0;
}
