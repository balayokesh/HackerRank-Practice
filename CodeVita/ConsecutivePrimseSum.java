/*
Question – :  Some prime numbers can be expressed as a sum of other consecutive prime numbers.

For example
5 = 2 + 3,
17 = 2 + 3 + 5 + 7,
41 = 2 + 3 + 5 + 7 + 11 + 13.
Your task is to find out how many prime numbers which satisfy this property are present in the range 3 to N subject to a constraint that summation should always start with number 2.
Write code to find out the number of prime numbers that satisfy the above-mentioned property in a given range.

Input Format: First line contains a number N

Output Format: Print the total number of all such prime numbers which are less than or equal to N.

Constraints: 2<N<=12,000,000,000
*/

import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;

public class ConsecutivePrimseSum {

    public static List<Integer> primeNumbers = new ArrayList<>();

    static void setPrimeArray(int n) {
        for (int i=2; i<n; i++) {
            if (isPrime(i)) {
                primeNumbers.add(i);
            }
        }
    }

    private static boolean isPrime(int n) {
        for (int i = 2; i <= n / 2; i++)
            if (n % i == 0) return false;
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();

        setPrimeArray(n);
        
        int sum = 0, count = 0;
        for (int i=2; i<primeNumbers.size(); i++) {
            sum += primeNumbers.get(i);
            if (isPrime(sum)) {
                count++;
            }
        }
        System.out.println(count);
    }
}