//
//  main.cpp
//  BleepWords
//
//  Created by Brent Perry on 7/7/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    string disliked = "frick";
    vector<string> words;
    for (string temp; cin >> temp;)
        words.push_back(temp);
    cout << "Number of words: " << words.size() << "\n";
    
    sort(words);
    
    for (int i = 0; i < words.size(); ++i) {
        if (i == 0 || words[i - 1] != words[i]) {
            if (words[i] == disliked)
                cout << "BLEEP\n";
            else
                cout << words[i] << "\n";
            
        }
    }
}
