#include <iostream>
using namespace std;

struct Queue{
    int data[10001];
    int begin, end;

    Queue() { // 생성자 제작
        begin = 0;
        end = 0;
    }

    void push(int num) {
        data[end] = num;

        end++;
    }

    int pop() {
        if(empty()) return -1;

        else {
            begin++;

            return data[begin - 1];
        }
    }

    int size() {
        return end - begin;
    }

    bool empty() {
        return (size() == 0) ? 1 : 0;
    }

    int front() {
        if(empty()) return -1;
        else return data[begin];
    }

    int back() {
        if(empty()) return -1;
        else return data[end - 1];
    }
};

int main() {
    int N;
    cin >> N;

    Queue q;

    while(N--) {
        string str;
        cin >> str;

        if(str == "push") {
            int num;
            cin >> num;

            q.push(num);
        }

        else if(str == "pop") {
            cout << q.pop() << endl;
        }

        else if(str == "size") {
            cout << q.size() << endl;
        }

        else if(str == "empty") {
            cout << q.empty() << endl;
        }

        else if(str == "front") {
            cout << q.front() << endl;
        }

        else if(str == "back") {
            cout << q.back() << endl;
        }
    }
}