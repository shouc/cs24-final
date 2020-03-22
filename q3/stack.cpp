//
// Created by Shou C on 3/16/20.
//

#include <stack>


template <class T>
void sort_push(stack<T>& l, T el){
    stack<T> temp;
    while (!l.is_empty()){
        if (l.top() <= el){
            break;
        }
        temp.push(l.top());
        l.pop();
    }
    l.push(el);
    while (!temp.is_empty()){
        l.push(temp.top());
        temp.pop();
    }
}

template <class T>
void sort (stack<T>& unsorted_st) {
    stack<T> t;
    while (!unsorted_st.is_empty()){
        sort_push(t, unsorted_st.top());
        unsorted_st.pop();
    }
    while (!t.is_empty()){
        unsorted_st.push(t.top());
        t.pop();
    }
}

// T(n) = n * (2n) + n
// O(n) = n^2
