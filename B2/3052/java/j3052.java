import java.util.*;

public class j3052 {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    int[] input = new int[10];
    int result = 0;

    for (int i = 0; i < 10; i++) {
      input[i] = sc.nextInt();
      input[i] = input[i] % 42;
    }

    for (int i = 0; i < 10; i++) {
      int count = 0;
      for (int j = i + 1; j < 10; j++) {
        if (input[i] == input[j])
          count++;
      }
      if (count == 0)
        result++;
    }
    System.out.print(result);
  }
}