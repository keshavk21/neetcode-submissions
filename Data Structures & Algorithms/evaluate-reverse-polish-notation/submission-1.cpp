class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto i : tokens){
            if(i == "+" || i =="-" || i =="*" || i=="/"){
                int i1 = st.top();
                st.pop();
                int i2 = st.top();
                st.pop();
                if(i=="+") st.push(i1+i2);
                else if(i=="-") st.push(i2-i1);
                else if(i=="*") st.push(i1*i2);
                else st.push(i2/i1);
            }
            else{
                int num = stoi(i);
                st.push(num);
            }
        }
        return st.top();
    }
};
