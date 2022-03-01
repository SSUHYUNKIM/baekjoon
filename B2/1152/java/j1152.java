import java.util.*;

public class j1152{
  public static void main(String args[]){
  Scanner sc = new Scanner(System.in);
  String input;
  int count = 0, i;

  input = sc.nextLine();
  int len = input.length();

  if(len == 1){
    if(input.charAt(0) == ' '){
      System.out.print("0");
      return;
    }
  }

  for(i = 1; i < len-1; i++){
    char tmpinput = input.charAt(i);
    if(tmpinput == ' '){
      count++;
    }
  }

  System.out.print(count + 1);
  }
}