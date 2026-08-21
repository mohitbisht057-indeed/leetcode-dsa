class MinStack {
    stack<int> st;       // Normal stack
    stack<int> minSt;    // Minimum track karne wala stack

public:

    MinStack() {
    }

    void push(int val) {

        // Normal stack mein value daalo
        st.push(val);

        // Agar minSt empty hai ya val naya minimum hai
        if (minSt.empty() || val <= minSt.top())
            minSt.push(val);
        else
            // Purana minimum dobara daalo
            minSt.push(minSt.top());
    }

    void pop() {
        st.pop();        // Normal stack se hatao
        minSt.pop();     // Min stack se bhi hatao
    }

    int top() {
        return st.top();       // Normal stack ka TOP
    }

    int getMin() {
        return minSt.top();    // Minimum
    }
};