import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int c=0;
		System.out.print("1: decimal to binary\n2: decimal to hexadecimal\n choice: ");
		c = sc.nextInt();
		if(c==1){
		  int decimal = 0;
		  System.out.print("Enter the number to convery: ");
		  decimal = sc.nextInt();
		     int binary[] = new int[40];    
             int index = 0;    
             while(decimal > 0){    
               binary[index++] = decimal%2;    
               decimal = decimal/2;    
             }    
             System.out.print("Binary of the given number is=");
             for(int i = index-1;i >= 0;i--){    
               System.out.print(binary[i]);    
             }    
		}
		if(c == 2){
		    int decimal = 0;
		    System.out.print("Enter the number to convery: ");
		    decimal = sc.nextInt();
		    int rem;  
             String hex="";   
             char hexchars[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};  
            while(decimal>0)  
             {  
               rem=decimal%16;   
               hex=hexchars[rem]+hex;   
               decimal=decimal/16;  
             }  
           System.out.print(hex);  
		}
	}
}