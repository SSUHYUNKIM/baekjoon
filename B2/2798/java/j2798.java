import java.util.*;

public class j2798 {
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int[] arr = new int[100];
    int result = 0;
    int temp = 0;

    int n = sc.nextInt();
    int m = sc.nextInt();

    for(int i = 0; i < n; i++){
      arr[i] = sc.nextInt();
    }

    for(int i = 0; i < n; i++){
      for(int j = i + 1; j < n; j++){
        for(int k = j + 1; k < n; k++){
          temp = arr[i] + arr[j] + arr[k];
          if(temp > result && temp <= m){
            result = temp;
          }
        }
      }
    }

    System.out.print(result);
  }
}