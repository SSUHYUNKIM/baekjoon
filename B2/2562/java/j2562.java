import java.util.*;

public class j2562{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int max = 0;
    int count = 0;
    for(int i = 1; i < 10; i++){
      int num = sc.nextInt();
      if(max < num){
        max = num;
        count = i;
      }
    }
    System.out.println(max);
    System.out.println(count);
    sc.close();
  }
}