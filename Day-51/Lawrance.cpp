void StackQueue :: push(int x)
 {
    s1.push(x);
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
    if(s1.size() == 0) return -1;
    while(s1.size() != 1) {
        s2.push(s1.top());
        s1.pop();
    }
    int temp = s1.top();
    s1.pop();
    while(!s2.empty()) {
        s1.push(s2.top());
        s2.pop();
    }
    return temp;
}
