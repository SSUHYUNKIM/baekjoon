import java.util.*;

public class j2920 {
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int[] input = new int[8];
    int a = 1, d = 1;
    for (int i = 0; i < 8; i++) {
      input[i] = sc.nextInt();
    }
  
    for (int i = 0; i < 8; i++) {
      if (input[i] != i + 1){
        a = 0;
        break;
      }
    }
    for (int i = 0; i < 8; i++) {
      if (input[i] != 8 - i) {
        d = 0;
        break;
      }
    }
  
    if (a == 1) System.out.println("ascending");
    else if (d == 1) System.out.println("descending");
    else System.out.println("mixed");
  }
}