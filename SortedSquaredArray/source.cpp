#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> array) {
    for(int i = 1; i < array.size(); i++) {
        int key = array[i];
        int j = i-1;
        while(key < array[j] && j >= 0) {
            array[j+1] = array[j];
            --j;
        }
        array[j+1] = key;
    }
    return array;
}

vector<int> sortedSquaredArray(vector<int> array) {
    for(int i = 0; i < array.size(); i++) {
        array[i] = abs(array[i]*array[i]);
    }
    vector<int> ans = insertionSort(array);
    return ans;
}