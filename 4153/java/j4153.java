import java.util.*;

public class j4153 {
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    while(true){
      int temp = 0;
      int a = sc.nextInt();
      int b = sc.nextInt();
      int c = sc.nextInt();

      if(a == 0 || b == 0 || c == 0){
        break;
      }

      if (a > b){
        temp = b;
        b = a;
        a = temp;
      }
      if (b > c){
        temp = c;
        c = b;
        b = temp;
      }
      if (a * a + b * b == c * c){
        System.out.println("right");
      }
      else{
        System.out.println("wrong");
      }  

    }
  }
}
