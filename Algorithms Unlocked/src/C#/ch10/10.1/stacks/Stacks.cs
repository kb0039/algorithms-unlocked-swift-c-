using System;
using System.Collections.Generic;

class Stack<T>{
    public int top = 0;
    public T error;
    public List<T> S = new List<T>();
    public bool StackEmpty (Stack<T> S){
        if (S.top == 0){
        Console.WriteLine("Stack is Empty");
            return true;
        } else {
            return false;
        }
    }
    public void PUSH (Stack<T> S, T x){
            this.top = S.top + 1;
            this.S.Add(x);
    }

    public T POP (Stack<T> S){
        if (StackEmpty(S)){
            return S.error;
        } 
        
        T removedObject = this.S[S.top - 1];
        this.S.RemoveAt(S.top - 1);
        this.top = S.top - 1;
        return removedObject;
    }
}