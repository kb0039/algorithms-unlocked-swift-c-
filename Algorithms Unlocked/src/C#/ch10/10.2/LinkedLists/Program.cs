using System;

namespace LinkedLists
{
    class Program
    {
        static void Main(string[] args)
        {

             LinkedList<int> linkedList = new LinkedList<int>{key = 11 };
             LinkedList<int> linkedList1 = new LinkedList<int>{key = 12 };
             LinkedList<int> linkedList2 = new LinkedList<int>{key = 13 };
             LinkedList<int> linkedList3 = new LinkedList<int>{key = 14 };
 
             linkedList.LIST_INSERT(linkedList1, linkedList);
             linkedList.LIST_INSERT(linkedList2, linkedList1);
             linkedList.LIST_INSERT(linkedList3, linkedList2);

        }
    }
}
