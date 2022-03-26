import java.util.*;

public class j8958 {
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    for(int i = 0; i < n; i++){
      int score = 1, result = 0;
      String input = sc.next();
      for(int j = 0; j < input.length(); j++){
        if(input.charAt(j) == 'O'){
          result += score;
          score++;
        } else{
          score = 1;
        }
      }
      System.out.println(result);
    }
    sc.close();
  }
}