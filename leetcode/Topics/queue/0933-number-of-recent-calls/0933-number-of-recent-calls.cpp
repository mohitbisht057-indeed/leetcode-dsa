class RecentCounter {

    queue<int> q;  // Saare recent request ke time yahan store honge

public:

    RecentCounter() {
        // Starting mein queue empty hai
    }

    int ping(int t) {

        q.push(t);  
        // New request ka time queue ke BACK mein add kiya

        // Jo requests 3000 ms se purani hain,
        // unko queue ke FRONT se remove karo
        while (q.front() < t - 3000) {

            q.pop();
            // Sabse purani request remove ki
        }

        return q.size();
        // Queue mein bachi requests = recent requests ki count
    }
};