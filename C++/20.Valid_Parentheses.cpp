class Solution {
	public:
		Solution() {
			std::ios_base::sync_with_stdio(false);
			std::cin.tie(NULL);
			std::cout.tie(NULL);
		}

		bool isValid(string s) {
			stack<char> myStack;
			int sLength = s.length();
			bool flag = true;
			if (sLength == 1 || s.at(0) == ')' || s.at(0) == '}' || s.at(0) == ']') {
				flag = false;
			} else {
				for (int i = 0; i < sLength; i++) {
					switch (s.at(i)) {
						case '(': 
							myStack.push('(');
							break;
						case '{': 
							myStack.push('{');
							break;
						case '[': 
							myStack.push('[');
							break;
						case ')':
							if (!myStack.empty() && myStack.top() == '(') {
								myStack.pop();
							} else {
								flag = false;
							} // if-else
							break;
						case '}':
							if (!myStack.empty() && myStack.top() == '{') {
								myStack.pop();
							} else {
								flag = false;
							} // if-else
							break;
						case ']':
							if (!myStack.empty() && myStack.top() == '[') {
								myStack.pop();
							} else {
								flag = false;
							} // if-else
							break;
					} // switch
				} // for
			} // if-else

			if (!myStack.empty()) flag = false;

			return flag;
		} // isValid
};
