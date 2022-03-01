import java.util.*;

public class j1159{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int check = 0;
    int[] count = new int[26];

    int n = sc.nextInt();

    for(int i = 0; i < n; i++){
      String name = sc.next();
      char index = name.charAt(0);
      count[index - 97]++;
    }

    for(int i = 0; i < 26; i++){
      if(count[i] >= 5){
        check++;
        System.out.print((char)(i + 'a'));
      }
    }
    if(check == 0){
      System.out.print("PREDAJA");
    }
  }
}