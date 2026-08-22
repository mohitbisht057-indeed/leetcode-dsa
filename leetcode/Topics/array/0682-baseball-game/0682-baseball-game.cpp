class Solution {
public:
    int calPoints(vector<string>& operations) {

        // Yahan saare valid scores store honge
        vector<int> scores;

        // Har operation ko ek-ek karke read karenge
        for (string op : operations) {

            // Agar operation "C", "D", "+" nahi hai,
            // toh ye ek normal number hai
            if (op != "C" && op != "D" && op != "+") {

                // "5" ko integer 5 mein convert karke add karo
                scores.push_back(stoi(op));
            }

            // C = last score ko remove karo
            else if (op == "C") {

                // Last score delete
                scores.pop_back();
            }

            // D = last score ka double add karo
            else if (op == "D") {

                // scores.back() = last score
                // uska double karke naya score add karo
                scores.push_back(scores.back() * 2);
            }

            // + = last 2 scores ka sum add karo
            else if (op == "+") {

                // Last score + second-last score
                int n = scores.size();

                scores.push_back(scores[n - 1] + scores[n - 2]);
            }
        }

        // Ab final scores ka total nikalo
        int total = 0;

        // Har score ko total mein add karo
        for (int score : scores) {
            total = total + score;
        }

        // Final answer return karo
        return total;
    }
};