import java.io.*;
import java.net.*;
class tcps
{
ServerSocket s;
tcps()
{
try
 {
 System.out.println("\n server starting \n");
 s=new ServerSocket(9335);
 System.out.println("\n sever started on port 9335 \n");
 System.out.println("\n waiting for the client \n");
 Socket c=s.accept();
 System.out.println("\n request from client recieved \n");
 InputStream in=c.getInputStream();
 OutputStream out=c.getOutputStream();
 boolean over=false;
 int b,cb;
 while(!over)
 {
 System.out.println("\n server:from client\n");
 while((b=in.read())!='\n')
 {
 System.out.println((char)b);
 }
 System.out.println("\n server \n");
 while((cb=System.in.read())!='\n')
 {
 out.write(cb);
 }
 out.write('\n');
 in.close();
 out.close();
 c.close();
 s.close();
 }
 }
 catch(IOException c)
 {
 }
 }
 public static void main(String args[])
{
tcps ss=new tcps();
}
} 
 