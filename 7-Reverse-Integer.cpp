class Solution {
public:
    int reverse(int x) {
        long reversed = 0;  // Use long to temporarily store the reversed number
        
        while (x != 0) {
            int digit = x % 10; 
            reversed = reversed * 10 + digit;
            x /= 10;
            
            // Check if reversed exceeds 32-bit signed integer range
            if (reversed > INT_MAX || reversed < INT_MIN) {
                return 0;  // Return 0 if overflow happens
            }
        }
        return (int)reversed;  // Safely cast back to int
    }
};
