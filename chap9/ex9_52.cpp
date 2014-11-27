#include <stack>
#include <string>
#include <iostream>

int evaluate(const std::string&); 

int main() {
    std::string exp = {"((((2-3)*2)+2)/2)"};
    int res;
    res = evaluate(exp);
    std::cout << exp << " = " << res << std::endl;

    return 0;
}

int evaluate(const std::string &s) {
    std::stack<char> opr;
    std::stack<int> element;

    for (auto it = s.cbegin(); it != s.cend(); ++it) {
        if (*it == '(') continue;
        if (*it == ')') {
            char op = opr.top();
            opr.pop();
            int tmp, f1, f2;
            f1 = element.top();
            element.pop();
            f2 = element.top();
            element.pop();
            switch (op) {
                case '+':
                    tmp = f2 + f1;
                    break;
                case '-':
                    tmp = f2 - f1;
                    break;
                case '*':
                    tmp = f2 * f1;
                    break;
                case '/':
                    tmp = f2 / f1;
                    break;
            }
            element.push(tmp);
        }
        else if (*it == '+' || *it == '-' || *it == '*' || *it == '/')
            opr.push(*it);
        else
            element.push(*it - '0');
    }

    return element.top();
}
