import java.util.*;

public class j2577 {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int temp;
    int result = 1;
    int[] arr = new int[10];

    for (int i = 0; i < 3; i++) {
      int num = sc.nextInt();
      result *= num;
    }

    while (result > 0) {
      temp = result % 10;
      arr[temp] += 1;
      result /= 10;
    }
    for (int i = 0; i < 10; i++) {
      System.out.println(arr[i]);
    }
    sc.close();
  }
}
