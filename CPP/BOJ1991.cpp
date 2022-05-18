#include <iostream>
using namespace std;

struct node {
    char L;
    char R;
};

struct node arr[80];

void preOrder(char root) {
    if (root == '.') return;

    else {
        cout << root;

        preOrder(arr[root].L);
        preOrder(arr[root].R);
    }
}

void inOrder(char root) {
    if (root == '.') return;

    else {
        inOrder(arr[root].L);

        cout << root;

        inOrder(arr[root].R);
    }
}

void postOrder(char root) {
    if (root == '.') return;

    else {
        postOrder(arr[root].L);
        postOrder(arr[root].R);

        cout << root;
    }
}

int N;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    char A, B, C;

    for (int i = 1; i <= N; ++i) {
        cin >> A >> B >> C;

        arr[A].L = B;
        arr[A].R = C;
    }

    preOrder('A');
    cout << endl;

    inOrder('A');
    cout << endl;

    postOrder('A');
    cout << endl;
}