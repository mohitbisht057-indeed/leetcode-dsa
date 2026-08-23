class MyStack {
public:

    queue<int> q1;
    // Main queue hai.
    // Iska FRONT hamesha Stack ka TOP rahega.

    queue<int> q2;
    // Temporary queue hai.
    // Push ke time naye element ko front mein laane ke kaam aayegi.


    void push(int x) {
        // Naya element Stack mein add karna hai.

        q2.push(x);
        // Naya element pehle q2 mein daala.
        // q2 empty thi, isliye x q2 ka front ban gaya.


        while (!q1.empty()) {
            // Jab tak q1 mein elements bache hain,
            // unko ek-ek karke q2 mein move karenge.

            q2.push(q1.front());
            // q1 ka front element q2 ke BACK mein add kiya.

            q1.pop();
            // Wahi element q1 se remove kar diya.
        }


        swap(q1, q2);
        // Ab q2 mein naya element front par hai.
        // q1 aur q2 ko swap karke q1 ko main queue bana diya.
    }


    int pop() {
        // Stack ka top remove karna hai.

        int x = q1.front();
        // q1 ka front Stack ka top hai.
        // Uski value x mein store kar di.

        q1.pop();
        // Ab Stack ke top ko q1 se remove kar diya.

        return x;
        // Removed element ki value return kar di.
    }


    int top() {
        // Stack ka top sirf dekhna hai.

        return q1.front();
        // q1 ka front return karo.
        // Kuch remove nahi hoga.
    }


    bool empty() {
        // Check karna hai Stack empty hai ya nahi.

        return q1.empty();
        // Agar q1 empty hai → true.
        // Agar q1 mein element hai → false.
    }
};