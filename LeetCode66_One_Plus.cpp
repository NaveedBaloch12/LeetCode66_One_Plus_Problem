#include <iostream>
#include <vector>

using namespace std;

    vector<int> plusOne(vector<int>& digits) {
        int LastIndx = digits.size() - 1;

        if(LastIndx == 0)
        {
            if(digits[LastIndx] == 9)
                return {1, 0};
            else
                digits[LastIndx]++;
        }
        for (int i = LastIndx; i > 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;

                if (i == 1 && digits[i-1] == 9) {
                    digits[0] = 0;
                    digits.insert(digits.begin(), 1);
                }
                else if(i == 1 && digits[i-1] < 9)
                {
                    digits[i-1]++;
                }
            } else {
                digits[i]++;
                break;
            }
        }
        return digits;
    }

int main()
{
    
    
    return 0;
}