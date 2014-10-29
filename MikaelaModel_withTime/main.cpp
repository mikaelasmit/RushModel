 //
 //  main.cpp
 //  priorityQ
 //
 //  Created by Jack Olney on 23/08/2014.
 //  Copyright (c) 2014 Jack Olney. All rights reserved.
 //


// Define a class of priority queue
 
 #include <iostream>
 #include <queue>
 
 using namespace std;
 
 class event {
 public:
	 event() : time(0) {}; //class constructor
 	
 	double time; //define time - make private eventually.
 	void (*p_fun)(); //function pointer - make private eventually.
 };
 

// Define operator() for comparison class
 struct timeComparison {
 	bool operator()(const event *lhs, const event *rhs) const
 	{
 		return lhs->time > rhs->time;
 	}
 };
 
void theTest()
{
	cout << "Tested." << endl;
}

 int main(int argc, const char * argv[])
 {
 
	 cout << "Hey, Mikaela!" << endl;

	//Declare our priority Q
	priority_queue<event*, vector<event*>, timeComparison> iQ;

	//Create new event.
	event * HivTest = new event;
	HivTest->time = 25;
	HivTest->p_fun = &theTest;
	iQ.push(HivTest);

	cout << HivTest->time << endl;
	cout << iQ.size() << endl;
	
	//DoFunStuff();
	//AnotherComment;
	cout << iQ.top()->time << endl;
	
	iQ.top()->p_fun();

	cin.get();
     return 0;
 }