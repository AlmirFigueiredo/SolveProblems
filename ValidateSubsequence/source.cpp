#include<bits/stdc++.h>
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
    int k = 0, pos = 0;
    for(int i = 0; i < sequence.size(); i++) {
        for(int j = pos; j < array.size(); j++) {
            if(sequence[i] == array[j] && k < sequence.size()) {
                k++;
                pos = j+1;
            }
        }
    }
    return sequence.size() == k;
}