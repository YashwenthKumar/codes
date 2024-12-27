#include <bits/stdc++.h>
#include <string>
#include <stack>
class Solution {
  public:
    int fun(char c){
        if(c=='^')return 3;
        else if(c=='*'||c=='/')return 2;
        else if(c=='+'||c=='-')return 1;
        else return 0;
    }
    string infixToPostfix(string s) {
        string res="";stack<char> st;
        for(int i=0;s[i];i++){
            if((s[i]>='a' and s[i]<='z') or
               (s[i]>='A' and s[i]<='Z') or
               (s[i]>='0' and s[i]<='9'))res+=s[i];
            else if(s[i]=='(')st.push(s[i]);
            else if(s[i]==')'){
                while(st.top()!='('){
                    res+=st.top();st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() and fun(s[i])<=fun(st.top())){
                    res+=st.top();st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            res+=st.top();st.pop();
        }
        return res;
    }
};
