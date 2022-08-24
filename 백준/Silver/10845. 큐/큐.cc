#include <iostream>
#include <queue>
using namespace std;
 
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
	int N, X;
	queue<int> Q;
	string str;
	cin >> N;
 
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push") {
			cin >> X;
			Q.push(X);
		}
		else if (str == "pop") {
			if (Q.empty()) cout << -1 << '\n';
			else {
				cout << Q.front() << '\n';
				Q.pop();
			}
		}
		else if (str == "size") {
			cout << Q.size() << '\n';
		}
		else if (str == "empty") {
			cout << Q.empty() << '\n';
		}
		else if (str == "front") {
			if (Q.empty()) cout << -1 << '\n';
			else cout << Q.front() << '\n';
		}
		else if (str == "back") {
			if (Q.empty()) cout << -1 << '\n';
			else cout << Q.back() << '\n';
		}
	}
 
	return 0;
}