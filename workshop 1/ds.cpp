#include <bits/stdc++.h>
using namespace std;


int main() {
    // Stacks
    stack<int> st;
    st.push(1);
    st.push(2);
    while (!st.empty()) {
        cout << (st.top()) << endl;
        st.pop();
    }

    // Queue
    queue<int> q;
    q.push(1);
    q.push(2);
    while (!q.empty()) {
        cout << (q.front()) << endl;
        q.pop();
    }

    // Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    while (!pq.empty()) {
        cout << (pq.top()) << endl;
        pq.pop();
    }


    return 0;
}