class Solution {
public:

    // Roman character ki value return karega
    int value(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        return 1000;  // M
    }

    int romanToInt(string s) {

        int answer = 0;

        // Last character ko chhod kar loop
        for (int i = 0; i < s.length() - 1; i++) {

            int current = value(s[i]);
            int next = value(s[i + 1]);

            // Chhoti value pehle hai -> subtract
            if (current < next) {
                answer -= current;
            }
            // Otherwise -> add
            else {
                answer += current;
            }
        }

        // Last character ko add karo
        answer += value(s[s.length() - 1]);

        return answer;
    }
};