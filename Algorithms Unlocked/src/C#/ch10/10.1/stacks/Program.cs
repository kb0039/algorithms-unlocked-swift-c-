using System;

namespace stacks
{
    class Program
    {
        static void Main(string[] args)
        {
            Stack<string> newStack = new Stack<string>();
            newStack.PUSH(newStack, "dd");
            newStack.PUSH(newStack, "ddd");
            newStack.PUSH(newStack, "dddd");
            newStack.PUSH(newStack, "ddddd");
            Console.WriteLine(newStack.S.Count);
            Console.WriteLine(newStack.POP(newStack));
            Console.WriteLine(newStack.POP(newStack));
            Console.WriteLine(newStack.POP(newStack));
            Console.WriteLine(newStack.POP(newStack));
            Console.WriteLine(newStack.POP(newStack));
        }
    }
}
