import java.util.*;

public class j1076 {
  public static void main(String args[]) {
    String[] color = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey",
        "white" };
    int[] mul = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };
    int i, j; 
    long result = 0;
    String input;
    int[] temp = new int[3];
    Scanner sc = new Scanner(System.in);
    for (i = 0; i < 3; i++) {
      input = sc.next();
      for (j = 0; j < 10; j++) {
        if (color[j].equals(input))
          temp[i] = j;
      }
    }
    result = temp[0] * 10 + temp[1];
    result = result * mul[temp[2]];
    System.out.print(result);
  }
}