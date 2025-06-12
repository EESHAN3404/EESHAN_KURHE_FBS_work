/*8. Print a pattern of stars in diamond shape
Input: n = 4
Output:
   *
  * *
 * * *
* * * *
 * * *
  * *
   *
*/

void main() {
    int n = 4;
    for(int i=1;i <= n;i++) {
        for(int s=1;s<= n-i;s++) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--) {
        for(int s=1;s<=n-i;s++) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
}