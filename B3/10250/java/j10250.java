import java.util.*;

public class j10250 {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int result;
    int t = sc.nextInt();
    for (int i = 0; i < t; i++) {
      int h = sc.nextInt();
      int w = sc.nextInt();
      int n = sc.nextInt();
      if (n % h == 0) {
        result = h * 100 + (n / h);
      } else {
        result = (n % h) * 100 + (n / h + 1);
      }
      System.out.println(result);
    }
  }
}
