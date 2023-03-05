#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
    vector<int> res;
    for(int i = 0; i < array.size(); i++) {
        for(int j = i+1; j < array.size(); j++) {
            if(array[i] + array[j] == targetSum) {
                res.push_back(array[i]);
                res.push_back(array[j]);
                return res;
            }
        }
    }
    return res;
}
