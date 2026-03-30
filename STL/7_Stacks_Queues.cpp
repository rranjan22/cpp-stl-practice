#include<bits/stdc++.h>
using namespace std;
int main(){
    //there are three types of stack in c++ -> stack, queue and priority queue
    //stack is a linear data structure which follows the LIFO (Last In First Out) principle. it is implemented using array or linked list. time complexity of push(), pop() and top() functions in stack is O(1)
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top() << endl; // it returns the top element of the stack. time complexity of top() function in stack is O(1)
    st.pop(); // it removes the top element of the stack. time complexity of pop() function in stack is O(1)
    cout << st.top() << endl;
    //print
    stack<int> st2 = st;
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    //--------------------

    //queue is a linear data structure which follows the FIFO (First In First Out) principle. it is implemented using array or linked list. time complexity of push(), pop() and front() functions in queue is O(1)
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.front() << endl; // it returns the front element of the queue. time complexity of front() function in queue is O(1)
    q.pop(); // it removes the front element of the queue. time complexity of pop() function in queue is O(1)
    cout << q.front() << endl;
    //print
    queue<int> q2 = q;
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    //-------------

    //priority queue is a linear data structure which follows the principle of priority. it is implemented using array or linked list. time complexity of push(), pop() and top() functions in priority queue is O(log n) where n is the current size of the priority queue.
    priority_queue<int> pq; // by default it is a max heap. if we want to make it a min heap then we have to use greater<int> as a comparator.
    pq.push(3);
    pq.push(1);
    pq.push(2);
    cout << pq.top() << endl; // it returns the top element of the priority queue. time complexity of top() function in priority queue is O(1)
    pq.pop(); // it removes the top element of the priority queue. time complexity of pop() function in priority queue is O(log n) where n is the current size of the priority queue.
    cout << pq.top() << endl;

    //Lecture 11 done
}