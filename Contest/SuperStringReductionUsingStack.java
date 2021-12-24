/*

A string is given you have to reduce it in to a smaller possible string . You have to implement a stack using it you should implement.

You will push the data into a stack if the current element to push and the element at the top of the stack is different . Otherwise you should pop the element at top of stack.

Once you have reached the top of stack print all the content of stack from the top.

Input Format

str=> string

Constraints

str=> string

Output Format

reduced string

Sample Input 0

aabbabc
Sample Output 0

cba

Explanation:
top=empty
ip: a 
stack = a 
top=a 

ip=a 
top == ip 
pop[top] 
stack=empty 
top=empty 

ip=b 
top!=ip 
push(ip) 
stack=b 
top=b 

ip=b 
top==ip 
pop[top] 
stack=empty 
top=empty 

ip=a 
top!=ip 
push(ip) 
stack=a 
top=a 

ip=b 
top!=ip 
push(ip) 
stack=ab 
top=b 

ip=c 
top!=ip 
push(ip) 
stack=abc 
top=c 
end of string
*/

import java.util.*;

class Stack {
    int top;
    char a[] = new char[100];
    
    Stack() {
        top = -1;
    }
    
    boolean push (char x) {
        if (top >= 100-1) {
            System.out.println("stack overflow");
            return false;
        }
        else {
            a[++top] = x;
            // System.out.println(x + " pushed into stack");
            return true;
        }
    }
    
    int pop() {
        if (top < 0) {
            System.out.println("Stack Underflow");
            return 0;
        }
        else {
            int x = a[top--];
            // System.out.println("popped" + x);
            return x;
        }
    }
    
    void print () {
        for(int i = top;i>-1;i--){
            System.out.print(a[i]);
        }
    }
}

public class Main {
    
	public static void main(String[] args) {
		Stack s = new Stack();
		
		Scanner scanner = new Scanner (System.in);
		String str = scanner.nextLine();
		int len = str.length();
		char[] chr = str.toCharArray();
		for (int i=0; i<len; i++) {
		    if (s.top == -1) {
		        s.push(chr[i]);
		    }
		    else if (s.a[s.top] == chr[i]) {
		      //  System.out.println("trying to pop at top=" + s.top);
		        s.pop();
		    }
		    else {
		        s.push(chr[i]);
		    }
		}
		s.print();
	}
}
