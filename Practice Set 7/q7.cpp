#include <iostream>
#include <string>
#include <stack> 
#include <vector>

using namespace std;

bool isValid(const string& s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
        
            if (st.empty()) {
                return false;
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}

int main() {
    string s1 = "()[]{}";
    string s2 = "([)]";
    string s3 = "{[]}";

    cout << "String \"" << s1 << "\" is " << (isValid(s1) ? "Valid" : "Invalid") << endl; 
    cout << "String \"" << s2 << "\" is " << (isValid(s2) ? "Valid" : "Invalid") << endl; 
    cout << "String \"" << s3 << "\" is " << (isValid(s3) ? "Valid" : "Invalid") << endl; 

    return 0;
}