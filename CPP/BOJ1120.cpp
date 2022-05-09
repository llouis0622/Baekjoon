#include<iostream>
#include<string>
using namespace std;

int main() {
    int cnt;
    int num = 50;

    string A, B;
    cin >> A >> B;

    for(int i = 0; i <= B.length() - A.length(); ++i) {
        cnt = 0;
        
        for(int j = 0; j < A.length(); ++j) {
            if(A[j] != B[j + i]) cnt++;
        }
        
        num = num >= cnt ? cnt : num;
    }

    cout << num << endl;

    return 0;
}