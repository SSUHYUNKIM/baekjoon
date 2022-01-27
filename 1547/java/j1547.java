import java.util.*;

public class j1547 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int i, temp;
    int[] answer = { 1, 2, 3 };
    int n = sc.nextInt();
    for (i = 0; i < n; i++) {
      int x = sc.nextInt();
      int y = sc.nextInt();
      temp = answer[x - 1];
      answer[x - 1] = answer[y - 1];
      answer[y - 1] = temp;
    }
    for (i = 0; i < 3; i++) {
      if (answer[i] == 1) {
        System.out.print(i + 1);
      }
    }
  }
}
