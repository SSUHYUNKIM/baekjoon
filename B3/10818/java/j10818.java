import java.util.*;

public class j10818{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int min = 1000000, max = -1000000;
    int n = sc.nextInt();
    for(int i = 0; i < n; i++){
      int num = sc.nextInt();
      if(num >= max){
        max = num;
      }
      if(num <= min){
        min = num;
      }
    }
    System.out.print(min + " " + max);
  }
}