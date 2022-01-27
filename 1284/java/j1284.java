import java.util.*;

public class j1284 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int number;
    int result = 1;
    while (true) {
      int n = sc.nextInt();
      if (n == 0) {
        break;
      }
      while (true) {
        if (n < 1) {
          System.out.print(result+"\n");
          result = 1;
          break;
        }
        number = n % 10;
        switch (number) {
          case 0:
            result += 4;
            result++;
            break;
          case 1:
            result += 2;
            result++;
            break;
          default:
            result += 3;
            result++;
            break;
        }
        n /= 10;
      }
    }
  }
}