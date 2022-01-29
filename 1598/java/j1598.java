import java.util.*;

public class j1598 {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int x, y;
    int a = sc.nextInt();
    int b = sc.nextInt();

    x = (a - 1) / 4 - (b - 1) / 4;
    y = (a - 1) % 4 - (b - 1) % 4;

    System.out.print(Math.abs(x) + Math.abs(y));
  }
}