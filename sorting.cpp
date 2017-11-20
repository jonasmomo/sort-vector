#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool HasPairWithSum(const std::vector<int> data, int sum){
    std::unordered_set<int> comp; //complements
    for (int value : data){
        if(comp.find(value) != comp.end)
            return true;
        comp.insert(sum-value); //possible underflow
    }
    return false;
}

int  main(){
    std::vector<int> data {1,2,4,4};
    int sum = 8;
    
    bool result = HasPairWithSum(data,sum);

    if (result)
        cout  << "true";
    else 
        cout  << "false";

    return 0;
}
