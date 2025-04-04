class Solution {
public:
    int myAtoi(string s) {
        long ans=0;
        bool st=false,sign=true;
        char prev=0;
        for (int i = 0; i < s.length(); i++) {
        if (!st && s[i] == ' ') continue;

        if (!st && (s[i] == '-' || s[i] == '+')) {  
            sign = (s[i] != '-');
            st = true;
            continue;
        }

        if (s[i] >= '0' && s[i] <= '9') {
            st = true;
            ans = ans * 10 + (s[i] - '0');
            if (sign && ans > INT_MAX) return INT_MAX;
            if (!sign && -ans < INT_MIN) return INT_MIN;
        } else if (st && (s[i] < '0' || s[i] > '9')) {  
            break;
        } else if (!st) {
            break;  
        }

        prev = s[i];
    }

        if(!sign) ans=-ans;
        return ans;
    }
};