#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isValid(string s){
    stack<char> stack;

    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c=='(' || c=='{' || c=='['){
            stack.push(c);
        }
        else if(c==')' || c=='}' || c==']'){
            if(stack.empty()){
                return false;
        }
        char top = stack.top();
        stack.pop();
        if ((c == ')' && top != '(') || 
                (c == '}' && top != '{') || 
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return stack.empty();
}

int main(){
    string input;
    cin>>input;
    if (isValid(input)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
