using System;
using System.Collections.Generic;


class Queue<T> {

public List<T> Q = new List<T>();
public int tail = 0;
public int head;

public T error;

public void ENQUEUE(Queue<T> Q, T x){

    Q.Q.Add(x);
    
    if (Q.tail == Q.Q.Count){
        Q.tail = 1;
    } else {
        Q.tail = Q.tail + 1;
    }
    
    Console.WriteLine(x);

}
public T DEQUEUE(Queue<T> Q){

    head = Q.Q.Count - 1;
    T x = Q.Q[Q.head];

    if (Q.head == Q.Q.Count){
        Q.head = 1;
    } else {
        Q.Q.RemoveAt(Q.head);
        Q.head = Q.head + 1;
        Console.WriteLine(x);
        return x;
    }

    return error;
}

}
