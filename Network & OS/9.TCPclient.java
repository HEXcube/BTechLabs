import java.io.*;
import java.net.*;
class tcpc
{
tcpc() throws Exception
{
int c;
 System.out.println("\n  requesting connection from server on port 9335 \n");
 Socket s=new Socket("127.0.0.1",9335);
 System.out.println("\n connected to server \n");
 OutputStream out=s.getOutputStream();
 InputStream in=s.getInputStream();
 boolean over=false;
 int b;
 while(!over)
 {
 System.out.println("\n client\n");
 while((c=System.in.read())!='\n')
 {
 out.write(c);
 }
 out.write('\n');
 System.out.println("\n client:from server \n");
 while((b=in.read())!='\n')
 {
System.out.println((char)b);
 }
 out.close();
 in.close();
 s.close();
 }
 }
 public static void main(String args[])
{
try
{
tcpc cc=new tcpc();
}
catch(Exception e)
{
} 
 }
 }
 