class MyQueue {
    private:
        std::vector<int> s1, s2;

    public:
        MyQueue() {}

        // Push element x to the back of queue.
        void push(int x) {
            s1.push_back(x);
        }

        // Removes the element from the front of queue and returns that element.
        int pop() {
            if (s2.empty()) {
                while (!s1.empty()) {
                    s2.push_back(s1.back());
                    s1.pop_back();
                }
            }
            int val = s2.back();
            s2.pop_back();
            return val;
        }

        // Get the front element.
        int peek() {
            if (s2.empty()) {
                while (!s1.empty()) {
                    s2.push_back(s1.back());
                    s1.pop_back();
                }
            }
            return s2.back();
        }

        // Returns whether the queue is empty.
        bool empty() {
            return s1.empty() && s2.empty();
        }
    };
