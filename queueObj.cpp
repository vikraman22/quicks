// CPP program for array implementation of queue 
#include <bits/stdc++.h> 
using namespace std; 

// A structure to represent a queue 
class Queue 
{ 
	public: 
	int front, rear, size; 
	unsigned capacity; 
	int* array; 
}; 



// Function to add an item to the queue. 
// It changes rear and size 
void enqueue(Queue* queue, int item) 
{ 
    
	(queue)->rear = ((queue)->rear + 1) % (queue)->capacity; 
	(queue)->array[(queue)->rear] = item; 
	(queue)->size = (queue)->size + 1; 
	cout << item << " enqueued to queue\n"; 
} 

// Function to remove an item from queue. 
// It changes front and size 
int dequeue(Queue* queue) 
{ 
	int item = (queue)->array[(queue)->front]; 
	(queue)->front = ((queue)->front + 1) % (queue)->capacity; 
	(queue)->size = (queue)->size - 1; 
	return item; 
} 


// Driver code 
int main() 
{ 
	Queue queue;
	queue.front = queue.size = 0;
	queue.capacity = 6;
	queue.rear = queue.capacity-1;
	queue.array =  new int[(queue.capacity * sizeof(int))];  

	enqueue(&queue, 10); 
	enqueue(&queue, 20); 
	enqueue(&queue, 30); 
	enqueue(&queue, 40);
	enqueue(&queue,70);
   cout << 	dequeue(&queue) << endl;
   
   cout << "end queue" << endl;
   
   Queue queue1;
   queue1.front = queue1.size = 0;
   queue1.capacity = 3;
   queue1.rear = queue1.capacity-1;
	queue1.array =  new int[(queue1.capacity * sizeof(int))];  
   enqueue(&queue1, 99); 
	enqueue(&queue1, 98); 
	enqueue(&queue1, 97);
	cout << dequeue(&queue1);
   

	return 0; 
} 
