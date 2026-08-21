class MyQueue {

    stack<int> s1; // Ye values receive karega
    stack<int> s2; // Ye Queue ka FRONT banayega

public:
    MyQueue() {
        // Constructor
        // Kuch karne ki zarurat nahi
    }

    void push(int x) {

        // Nayi value hamesha s1 mein daalo
        s1.push(x);
    }

    int pop() {

        // Agar s2 empty hai,
        // toh s1 ki values ko s2 mein transfer karo
        if (s2.empty()) {

            while (!s1.empty()) {

                // s1 ka TOP nikalo
                // aur s2 mein daalo
                s2.push(s1.top());
                s1.pop();
            }
        }

        // Ab s2 ka TOP Queue ka FRONT hai
        int ans = s2.top();

        // FRONT ko remove karo
        s2.pop();

        return ans;
    }

    int peek() {

        // Agar s2 empty hai,
        // toh s1 se values transfer karo
        if (s2.empty()) {

            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        // s2 ka TOP = Queue ka FRONT
        return s2.top();
    }

    bool empty() {

        // Queue tabhi empty hogi
        // jab DONO stacks empty hon
        return s1.empty() && s2.empty();
    }
};