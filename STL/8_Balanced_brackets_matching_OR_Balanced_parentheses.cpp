#include<bits/stdc++.h>
using namespace std;

bool helperUsingStack(string &str){
    stack<char> st;

    for(int i = 0; i < str.size(); i++){
        char ch = str[i];

        // Opening brackets
        if(ch == '(' || ch == '[' || ch == '{'){
            st.push(ch);
        }
        else{
            // Closing brackets
            if(st.empty()) return false;

            if((st.top() == '(' && ch == ')') ||
               (st.top() == '[' && ch == ']') ||
               (st.top() == '{' && ch == '}')){
                st.pop();
            }
            else{
                return false; // mismatch
            }
        }
    }

    return st.empty();
}

int main(){
    string str;
    cout << "Enter the string: ";
    cin >> str;

    if(helperUsingStack(str)){
        cout << "The string is valid." << endl;
    }
    else{
        cout << "The string is not valid." << endl;
    }
}

//INTUTION:
//we have to check if the given string of brackets is valid or not. a string is valid if every opening bracket has a corresponding closing bracket and the brackets are in the correct order. for example, "()", "[]", "{}" are valid strings but "(]", "([)]", "{[}]" are not valid strings. we can use stack data structure to solve this problem. we will traverse the string and if we encounter an opening bracket then we will push it in the stack and if we encounter a closing bracket then we will check if the stack is empty or not. if the stack is empty then it means that there is no opening bracket for this closing bracket and hence the string is not valid. if the stack is not empty then we will check if the top of the stack is the corresponding opening bracket for this closing bracket or not. if it is then we will pop the top of the stack and continue traversing the string. if it is not then it means that there is a mismatch and hence the string is not valid. at the end of the traversal if the stack is empty then it means that all the brackets are matched and hence the string is valid otherwise it means that there are some opening brackets which are not matched and hence the string is not valid.

//LOGIC:
//we will use stack to solve this problem. we will traverse the string and if we encounter an opening bracket then we will push it in the stack and if we encounter a closing bracket then we will check if the stack is empty or not. if the stack is empty then it means that there is no opening bracket for this closing bracket and hence the string is not valid. if the stack is not empty then we will check if the top of the stack is the corresponding opening bracket for this closing bracket or not. if it is then we will pop the top of the stack and continue traversing the string. if it is not then it means that there is a mismatch and hence the string is not valid. at the end of the traversal if the stack is empty then it means that all the brackets are matched and hence the string is valid otherwise it means that there are some opening brackets which are not matched and hence the string is not valid.

//Time complexity of this solution is O(n) where n is the length of the string and space complexity is O(n) in worst case when all the characters in the string are opening brackets.