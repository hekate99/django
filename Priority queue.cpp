#include <queue>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
// Make a priority queue of int using a vector container
priority_queue<int, vector<int>, less<int> > pq;
// Push a couple of values
pq.push(1);
pq.push(7);
pq.push(2);
pq.push(2);
pq.push(3);
cout << pq.top();
// Pop all the values off
/*while(!pq.empty()) {
cout << pq.top() << endl;
pq.pop();
}*/
return 0;
}
