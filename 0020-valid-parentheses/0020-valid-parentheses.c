bool isValid(char* s) {
    int len = strlen(s);
    if(len%2!=0)
    {
        return false;
    }
    char stack[len];
    int top = -1;
    for(int i=0;i<len;i++)
    {
        int curr = s[i];
        if(curr == '(')
        {
            top++;
            stack[top] = ')';
        }
        else if(curr == '{')
        {
            top++;
            stack[top] = '}';
        }
        else if(curr == '[')
        {
            top++;
            stack[top] = ']';
        }
        else
        {
            if(top == -1 || stack[top]!=curr)
            {
                return false;
            }
            top--;
        }
    }
    return top == -1;
}