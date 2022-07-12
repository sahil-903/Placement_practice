class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long> possibleNums,fix;
        possibleNums.insert(1);
 
        while((int)fix.size() != n)
        {
            long long nextUgly = *possibleNums.begin();
            fix.insert(nextUgly);
            possibleNums.erase(nextUgly);
            possibleNums.insert(2*nextUgly);
            possibleNums.insert(3*nextUgly);
            possibleNums.insert(5*nextUgly);
        }
 
        return *fix.rbegin();
        
    }
};
