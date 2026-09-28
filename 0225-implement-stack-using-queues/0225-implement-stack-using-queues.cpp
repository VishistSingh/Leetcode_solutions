class MyStack {
public:
    queue<int> q1, q2;
    int topElement;

    MyStack() {}

    void push(int x) {
        topElement = x;

        if (!q1.empty())
            q1.push(x);
        else
            q2.push(x);
    }

    int pop() {
        if (!q1.empty()) {
            while (q1.size() > 1) {
                topElement = q1.front();
                q2.push(q1.front());
                q1.pop();
            }

            int ele = q1.front();
            q1.pop();
            return ele;
        }
        else {
            while (q2.size() > 1) {
                topElement = q2.front();
                q1.push(q2.front());
                q2.pop();
            }

            int ele = q2.front();
            q2.pop();
            return ele;
        }
    }

    int top() {
        return topElement;
    }

    bool empty() {
        return q1.empty() && q2.empty();
    }
};