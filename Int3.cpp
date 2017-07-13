//
//  main.cpp
//  PreSession1
//
//  Created by Pooja Chowdhary on 7/12/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int> &A, int B) {
    vector<int> ret;
    int count = B % A.size();
    for (int i = 0; i < A.size(); i++) {
        if (i == A.size() - count) {
            for (int j = 0; j < count; j++){
                ret.push_back(A[j]);
            }
            break;
        }
        ret.push_back(A[i + count]);
        
    }
    return ret; 
}


int main(int argc, const char * argv[]) {
    // insert code here...
//    vector<int> A = {1, 2, 3, 4, 5, 6};
    vector<int> A = {14, 5, 14, 34, 42, 63, 17, 25, 39, 61, 97, 55, 33, 96, 62, 32, 98, 77, 35};
    vector<int> B = rotateArray(A, 56);
    
    return 0;
}
