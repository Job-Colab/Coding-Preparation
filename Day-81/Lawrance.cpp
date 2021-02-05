char* reverse(char *s, int len)
{
    stack<char> st;
    while(*s != '\0') {
        st.push(*s);
        ++s;
    }
    char *newArray = s;
    int num = 0;
    while(!st.empty()) {
        newArray[num++] = st.top();
        st.pop();
    }
    return newArray;

}
