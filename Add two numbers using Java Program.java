/*Java program for Addition of Two Numbers.*/
 
import java.util.*;
 
public class AddTwoNum{
 
     public static void main(String []args){
         int a,b,add;
         /*scanner class object to read values*/
         Scanner buf=new Scanner(System.in); 
          
         System.out.print("Enter first number: ");
         a=buf.nextInt();
         System.out.print("Enter second number: ");
         b=buf.nextInt();
          
         add= a+b;
          
         System.out.println("Addition is: " + add);
     }
}