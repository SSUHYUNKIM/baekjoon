import java.util.*;

public class j1259{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    while(true){
      String arr = sc.next();
      if(arr.equals("0")){
        break;
      }
      int len = arr.length();
      int temp = 1;
      for (int i = 0; i < len / 2; i++){
        if (arr.charAt(i) != arr.charAt(len -1 - i)){
          temp = 0;
          break;
        }
      }
      if(temp == 1){
        System.out.println("yes");
      }else{
        System.out.println("no");
      }
    }
  }
}