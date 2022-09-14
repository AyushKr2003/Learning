/*fibonacci is a series in which next number is sum of last two number in the series
  it is start with two numbers 0 and 1 Example 
  0 , 1 , 1 , 2 , 3 , 5 , 8 , 13.............. */

//#include <stdio.h>
//int main() {
//
//    int i, n;
//
//    // initialize first and second terms
//    int t1 = 0, t2 = 1;
//
//    // initialize the next term (3rd term)
//    int nextTerm = t1 + t2;
//
//    // get no. of terms from user
//    printf("Enter the number of terms: ");
//    scanf("%d", &n);
//
//    // print the first two terms t1 and t2
//    printf("Fibonacci Series: %d, %d, ", t1, t2);
//
//    // print 3rd to nth terms
//    for (i = 3; i <= n; ++i) {
//        printf("%d, ", nextTerm);
//        t1 = t2;
//        t2 = nextTerm;
//        nextTerm = t1 + t2;
//    }
//
//    return 0;
//}


//method 2

//#include <stdio.h>
//
//int fib(int n);
//
//int main() {
//    printf("%d",fib(3));
//
//    return 0;
//}
//
//int fib(int n){
//    if (n==0){
//        return 0;
//    }
//    if (n==1){
//        return 1;
//    }
//    int fibNm1 = fib(n-1);
//    int fibNm2 = fib(n-2);
//    int fibN = fibNm1 + fibNm2;
//    return fibN;
//}
