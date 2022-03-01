import java.util.*;

public class j15829 {
  static final int M = 1234567891;
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    long result = 0, R = 1;

    int l = sc.nextInt();
    String str = sc.next();
    char[] arr = str.toCharArray();

    for(int i = 0; i < l; i++){
      result = (result + (arr[i] - 'a' + 1) * R) % M;
      R = (R * 31) % M;
    }

    System.out.println(result);
  }
}