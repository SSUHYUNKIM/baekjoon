import java.util.*;

public class j2231 {
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int tmp, result = 0, digit = 0;
    int temp, sum = 0;
    int n = sc.nextInt();
    tmp = n;

    while (tmp > 0) {
      tmp /= 10;
      digit++;
    }

    tmp = n - digit * 9;
    for (int i = tmp; i <= n; i++) {
      temp = i;
      sum += temp;
      while (temp > 0) {
          sum += temp % 10;
          temp /= 10;
      }

      if (sum == n) {
          result = i;
          break;
      }
      sum = 0;
  }

  System.out.println(result);
  }
}