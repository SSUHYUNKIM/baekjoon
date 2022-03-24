import java.util.*;

public class j2908{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int resulta, resultb;
    int a = sc.nextInt();
    int b = sc.nextInt();
  
    resulta = (a % 10 * 100) + (a / 10 % 10 * 10) + a / 100;
    resultb = (b % 10 * 100) + (b / 10 % 10 * 10) + b / 100;
  
  
    if(resulta > resultb) System.out.print(resulta);
    else System.out.print(resultb);
    sc.close();
  }
}