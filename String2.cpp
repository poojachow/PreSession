//
//  main.cpp
//  PreSession3
//
//  Created by Pooja Chowdhary on 7/13/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int lengthOfLastWord(const string &A) {
    int len = 0;
    int finalLen = 0;
    
    for (int i = 0; i < A.length(); i++) {
        if (A[i] - ' ' == 0) {
            if (len != 0) {
                finalLen = len;
            }
            len = 0;
        }
        else {
            len++;
        }
    }
    if (len != 0) {
        finalLen = len;
    }
    return finalLen;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    string s = "o";
    int a = lengthOfLastWord(s);
    cout << a << endl;
    
    return 0;
}
