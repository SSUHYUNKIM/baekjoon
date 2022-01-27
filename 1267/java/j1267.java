import java.util.*;

public class j1267{ 
  public static void main(String[] args) { 
    int y = 0;
    int m = 0;
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
  
    for(int i =0; i < n; i++){
      int usingtime = sc.nextInt();
      y += ((usingtime / 30) + 1) * 10;
      m += ((usingtime / 60) + 1) * 15;
    }
  
    if(y > m) System.out.print("M " + m);
    else if(y < m) System.out.print("Y " + y);
    else System.out.print("Y M " + y);
  } 
}


