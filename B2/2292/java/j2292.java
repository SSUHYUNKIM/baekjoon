import java.util.*;

public class j2292 {
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int i = 1, count = 1;
    int n = sc.nextInt();
    if(n == 1){
      System.out.print("1");
      System.exit(0);
    }     
    while(true){
      n -= i;
      i = count*6;
      count++;
      if(i >= n){
        break;
      }
    }
    System.out.print(count);
  }
}
