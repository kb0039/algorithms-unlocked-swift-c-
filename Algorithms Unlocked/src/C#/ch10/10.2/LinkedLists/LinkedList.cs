using System;
using System.Collections.Generic;

public class LinkedList<T> where T : IEquatable<T> {
    public T key;
    public LinkedList<T> head;
    public LinkedList<T> next;
    public LinkedList<T> prev;

    public LinkedList (){
        this.head = this;
    }
    public LinkedList<T> LIST_SEARCH(LinkedList<T> L, T k) {
        var x =  L.head;
        while ((x != null) && !(x.key.Equals(k))) {
            x = x.next;
        }
        return x;
    }

    public void LIST_INSERT(LinkedList<T> L, LinkedList<T> x) {
        x.next = L.head;

        if (L.head != null){
            L.head.prev = x;
        } else {
          L.head = x;
          x.prev = null;
        }
    }

    public void LIST_DELETE (LinkedList<T> L, LinkedList<T> x) {
        if (x.prev != null){
            x.prev.next = x.next;
        } else {
            L.head = x.next;
        }

        if (x.next != null){
            x.next.prev = x.prev;
        }

    }

}

