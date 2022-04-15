#include <iostream>
#include <string>
using namespace std;

string str, arr;

int main() {
    getline(cin, str);
    getline(cin, arr);
    
    if(arr.size() > str.size()) cout << 0 << endl;
    else {
        int cnt = 0;
        
        for(int i = 0; i < str.size() - arr.size() + 1; ++i) {
            bool bl = true;
            
            for(int j = 0; j < arr.size(); ++j) {
                if(str[i + j] != arr[j]) {
                    bl = false;
                    break;
                }
            }
            
            if(bl) {
                cnt++;
                i += arr.size() - 1;
            }
        }
        
        cout << cnt << endl;
        
    }

    return 0;
}