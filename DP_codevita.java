import java.io.*;
import java.util.*;
public class DP_codevita { public static void main(String[] args) {
  Scanner sc=new Scanner(System.in);
  int a=sc.nextInt();
  int arr[][]=new int[a][a];

  for(int i=0;i<a;i++){
      for(int j=0;j<a;j++){  
        arr[i][j]=sc.nextInt();
      }
    }


  for(int i=0;i<arr.length;i++){
    for(int j=0;j<arr[0].length;j++){
      if(i==0 && j==0){
        arr[i][j]=0;
       }
       else if(i==0 && j!=0){   
          arr[i][j]= (int)Math.floor((arr[i][j-1]/2)+arr[i][j]);
       }
       else if(i!=0 && j==0){
            arr[i][j]= (int)Math.floor((arr[i-1][j]/2)+arr[i][j]);
       }
       else{ 
          int min=Math.min(arr[i][j-1], arr[i-1][j]);
          arr[i][j]= (int)Math.floor((min/2)+arr[i][j]);
       }
    }   1
  }
  System.out.println(arr[a-1][a-1]);
  }
}