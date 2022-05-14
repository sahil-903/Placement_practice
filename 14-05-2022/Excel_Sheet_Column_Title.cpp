class Solution {
public:
string convertToTitle(int columnNumber)
{
    string output = "";
    if (columnNumber <= 26)
    {
        output += (columnNumber + 64);
    }
    else
    {
        if(columnNumber%26==0)
        {
            output = output + convertToTitle((columnNumber / 26)-1) + "Z";
        }
        else
        {
            output = output + convertToTitle(columnNumber / 26) + convertToTitle(columnNumber%26);
        }
    }
    return output;
}
};
