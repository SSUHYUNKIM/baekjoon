import java.util.*;

public class j1010 {
  public static void main(String[] args){
  Scanner sc = new Scanner(System.in);
  double result;
  int t = sc.nextInt();

  for(
  int i = 0;i<t;i++)
  {
    int n = sc.nextInt();
    int m = sc.nextInt();
    result = factorial(m) / (factorial(n) * (factorial(m - n)));
    System.out.printf("%.0f\n", result);
  }
}

  public static double factorial(int n) {
    if(n == 0)
      return 1;
    else
      return n * factorial(n - 1);
  }
}
