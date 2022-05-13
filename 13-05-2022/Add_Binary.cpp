class Solution {
public:
    string addBinary(string a, string b) {
        
        int aLen = a.length();
        int bLen = b.length();
        
        int i = 0, carry = 0; 
        string result = "";
        
        
        while(i < aLen || i < bLen || carry != 0)
        {
            int x = 0;
            if (i < aLen && a[aLen - 1 - i] == '1')
                x = 1;
            
            int y = 0;
            if (i < bLen && b[bLen - 1 - i] == '1')
                y = 1;

            int digit = (x+y+carry)%2;
            
            result = to_string(digit) + result;
            
            carry = (x+y+carry)/2;
            
            i++;

        }
        
        return result;
    }
};
