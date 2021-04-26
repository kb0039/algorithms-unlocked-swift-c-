using System;

namespace queues
{
    class Program
    {
        static void Main(string[] args)
        {
            Queue<int> newQueue = new Queue<int>();
            newQueue.ENQUEUE(newQueue, 1);
            newQueue.ENQUEUE(newQueue, 2);
            newQueue.ENQUEUE(newQueue, 3);
            newQueue.ENQUEUE(newQueue, 4);
            newQueue.ENQUEUE(newQueue, 5);

            newQueue.DEQUEUE(newQueue);
            newQueue.DEQUEUE(newQueue);
            newQueue.DEQUEUE(newQueue);
            newQueue.DEQUEUE(newQueue);
            newQueue.DEQUEUE(newQueue);

        }
    }
}
