// #include <bits/stdc++.h>
// using namespace std;
  
// int prec(char c)
// {
//     if (c == '^')
//         return 3;
//     else if (c == '/' || c == '*')
//         return 2;
//     else if (c == '+' || c == '-')
//         return 1;
//     else
//         return -1;
// }
  
// int main(){
//     string s;
//     // s = "a+b*(c^d-e)^(f+g*h)-i";
//     cin>>s;
//     stack<char> st;
//     string result;
  
//     for(int i = 0; i < s.length(); i++) {
//         char c = s[i];
//         if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
//             result += c;
//         }
//         else if (c == '(') st.push('(');
//         else if (c == ')') {
//             while (st.top() != '(') {
//                 result += st.top();
//                 st.pop();
//             }
//             st.pop();
//         }
//         else {
//             while (!st.empty() && prec(s[i]) <= prec(st.top())) {
//                 result += st.top();
//                 st.pop();
//             }
//             st.push(c);
//         }
//     }
//     while (!st.empty()) {
//         result += st.top();
//         st.pop();
//     }
  
//     cout << result << endl;
    
//     return 0;
// }
 






// CPP program to check for balanced brackets.
#include <bits/stdc++.h>
using namespace std;
bool areBracketsBalanced(string expr)
{
	stack<char> s;
	char x;
	for (int i = 0; i < expr.length(); i++)
	{
		if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
		{
			s.push(expr[i]);
			continue;
		}
		if (s.empty())
			return false;

		switch (expr[i]) {
		case ')':
			x = s.top();
			s.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':
			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':
			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}
	return (s.empty());
}

int main()
{
	string expr = "{()}[]";

	if (areBracketsBalanced(expr))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}






// Tower of hanoi
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod,
				char aux_rod)
{
	if (n == 0) {
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	cout << "Move disk " << n << " from rod " << from_rod
		<< " to rod " << to_rod << endl;
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
int main()
{
	int N = 3;
	towerOfHanoi(N, 'A', 'C', 'B');
	return 0;
}






