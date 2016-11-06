import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int temp,flag=n;
        BigInteger a,b,c;
        while(n!=0)
            {
            a=sc.nextBigInteger();
            b=sc.nextBigInteger();
            c=add(a,b);
            temp=flag-n+1;
            System.out.println("Case "+temp+":");
            System.out.println(a+" + "+b+" = "+c);
            n=n-1;
            if(n!=0){System.out.println("");}
            }
    }
    public static BigInteger add(BigInteger a,BigInteger b)
    {
        BigInteger c=a.add(b);
        return c;
    }
}


