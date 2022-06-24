class MyStack {
public:
deque dq;

MyStack() {
    
}

void push(int x) {
    dq.push_back(x);
}

int pop() {
    int ans = dq.back();
    dq.pop_back();
    return ans;
}

int top() {
    return dq.back();
}

bool empty() {
    return dq.empty();
}
};
