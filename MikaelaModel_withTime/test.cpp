////
////
////
//////
//////#include <string>
//////#include <queue>
//////#include <iostream>
//////
//////using namespace std;  // This is to make available the names of things defined in the standard library.
//////
//////int main()
//////{
//////	priority_queue<string> queue;
//////	string word;
//////
//////	queue.push(100);
//////	queue.push(300);
//////	queue.push(50);
//////	queue.push(150);
//////
//////	while (!queue.empty())
//////	{
//////		cout << queue.top() << endl;
//////		queue.pop();
//////	}
//////
//////	system("pause");
//////
//////	return 0;
//////}
////
////#include <string>
////#include <queue>
////#include <iostream>
////
////using namespace std;  // This is to make available the names of things defined in the standard library.
////
////int main()
////{
////    priority_queue<string> pq; // Creates a priority queue pq to store strings, and initializes the queue to be empty.
////
////    pq.push("the quick");
////    pq.push("fox");
////    pq.push("jumped over");
////    pq.push("the lazy dog");
////
////    // The strings are ordered inside the priority queue in lexicographic (dictionary) order:
////    // "fox", "jumped over", "the lazy dog", "the quick"
////    //  The lowest priority string is "fox", and the highest priority string is "the quick"
////
////    while (!pq.empty()) {
////       cout << pq.top() << endl;  // Print highest priority string
////       pq.pop();                    // Remmove highest priority string
////    }
////
////    cin.get();
////	return 0;
////}
////
////
//////int main()
//////{
//////	cout << "Hello, Mikaela!" << endl;
//////	
//////	priority_queue<double, vector<double>, greater<double> > eventQ;
//////	
//////	double HIVInfection = 10;
//////	
//////	eventQ.push(HIVInfection);
//////	
//////	cout << "The next event will happen at " << eventQ.top() << endl;
//////	
//////	double Death = 20;
//////	
//////	eventQ.push(Death);
//////	
//////	cout << "The next event will happen at " << eventQ.top() << endl;
//////	
//////	double Period = 5;
//////	
//////	eventQ.push(Period);
//////	
//////	cout << "The next event will happen at " << eventQ.top() << endl;
//////
//////	cin.get();
//////
//////	return 0;
//////}