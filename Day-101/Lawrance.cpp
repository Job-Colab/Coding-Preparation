/*returns min element from stack*/
int _stack :: getMin()
{
   if(s.empty()) return -1;
   return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
   if(s.empty()) return -1;
   int element = s.top() / 1000;
   if(element == minEle) {
       minEle = s.top() - (element * 1000);
   }
   s.pop();
   return element;
}

/*push element x into the stack*/
void _stack::push(int x)
{
   if(s.empty()) {
       minEle = x;
       s.push(x * 1000);
   }
   else {
       s.push((x * 1000) + minEle);
       minEle = min(x, minEle);
   }
}
