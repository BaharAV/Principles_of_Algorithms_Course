#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, adad;
    cin >> n;
    priority_queue<int> tasks;
    string order;
    for (int i = 0; i < n; i++) {
        cin >> order;
        if (order == "Add") {
            cin >> order;
            cin >> adad;
            tasks.push(adad * -1);
        } else {
            cin >> order;
            cin >> order;
            cout << tasks.top() * -1<<endl;
            tasks.pop();
        }
    }
}
